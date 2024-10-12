from launch import LaunchDescription
from launch.actions import DeclareLaunchArgument, IncludeLaunchDescription
from launch.conditions import IfCondition, UnlessCondition
from launch.substitutions import LaunchConfiguration
from launch_ros.actions import Node, SetRemap
from launch_ros.substitutions import FindPackageShare
from launch.launch_description_sources import PythonLaunchDescriptionSource
import os

def generate_launch_description():

    ## ***** Launch arguments *****
    use_sim_time_arg = DeclareLaunchArgument('use_sim_time', default_value='False')
    publish_period_sec = LaunchConfiguration('publish_period_sec', default='1.0')
    resolution = LaunchConfiguration('resolution', default='0.05')
    pkg_share = FindPackageShare(package='my_cartographer').find('my_cartographer')
    configuration_directory = LaunchConfiguration('configuration_directory', default=os.path.join(pkg_share, 'config'))
    configuration_basename = LaunchConfiguration('configuration_basename', default='my_cartogrpaher_2d.lua')
    
    ## ***** File paths ******
    rviz_dir = os.path.join(pkg_share,'rviz')
    rviz_file = os.path.join(rviz_dir, 'default.rviz')
    urdf_dir = os.path.join(pkg_share, 'urdf')
    urdf_file = os.path.join(urdf_dir, 'backpack_2d.urdf')
    with open(urdf_file, 'r') as infp:
        robot_desc = infp.read()
    
    lslidar_launch = IncludeLaunchDescription(
        PythonLaunchDescriptionSource(
            os.path.join(FindPackageShare('lslidar_driver').find('lslidar_driver'), 'launch', 'lsn10_launch.py')
        ),
    )

    # Cartographer node
    cartographer_node = Node(
        package='cartographer_ros',
        executable='cartographer_node',
        name='cartographer_node',
        parameters=[{'use_sim_time': LaunchConfiguration('use_sim_time')}],
        arguments=['-configuration_directory', configuration_directory,
                   '-configuration_basename', configuration_basename],
        remappings=[('scan', 'scan')],
        output='screen'
    )

    # Occupancy grid node
    cartographer_occupancy_grid_node = Node(
        package='cartographer_ros',
        executable='occupancy_grid_node',
        parameters=[
            {'use_sim_time': LaunchConfiguration('use_sim_time')}],
        arguments=['-resolution', resolution, '-publish_period_sec', publish_period_sec]
    )
    
    # RViz node
    rviz_node = Node(
        package='rviz2',
        namespace='rviz2',
        executable='rviz2',
        name='rviz2',
        output='screen',
         arguments=['-d',  rviz_file ]
    )
    
    # Robot state publisher node
    robot_state_publisher_node = Node(
        package='robot_state_publisher',
        executable='robot_state_publisher',
        parameters=[{'robot_description': robot_desc}],
        output='screen'
    )

    # TF publisher node (from tf_init package)
    tf_publisher_node = Node(
        package='tf_init',  # Ensure this matches your package name
        executable='tf_publisher',  # Ensure this matches the entry point in setup.py
        name='tf_publisher',
        output='screen'
    )

    return LaunchDescription([
        use_sim_time_arg,
        lslidar_launch,
        rviz_node,
        cartographer_node,
        cartographer_occupancy_grid_node,
        robot_state_publisher_node,
        tf_publisher_node,  # Add the TF publisher node here
    ])
