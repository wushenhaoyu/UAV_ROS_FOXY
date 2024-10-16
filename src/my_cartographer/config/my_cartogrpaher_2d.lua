include "map_builder.lua"
include "trajectory_builder.lua"
options = {
  map_builder = MAP_BUILDER,
  trajectory_builder = TRAJECTORY_BUILDER,
  map_frame = "map",
  tracking_frame = "base_link",  -- 保持为 base_link 来进行跟踪
  published_frame = "base_link",  -- 保持 base_link 为发布的位姿框架
  odom_frame = "odom",  -- 保持 odom 框架用于里程计
  provide_odom_frame = true,  -- 不提供 odom 框架
  publish_frame_projected_to_2d = false,  -- 只发布2D位姿
  use_odometry = false,  -- 不使用里程计
  use_nav_sat = false,  -- 不使用导航卫星数据
  use_landmarks = false,  -- 不使用地标
  num_laser_scans = 1,  -- 只使用一个激光雷达
  num_multi_echo_laser_scans = 0,  -- 不使用多回波雷达
  num_subdivisions_per_laser_scan = 1,  -- 不分割激光扫描数据
  num_point_clouds = 0,  -- 不使用点云
  lookup_transform_timeout_sec = 0.2,  -- 变换查找超时
  submap_publish_period_sec = 0.3,  -- 发布子地图的频率
  pose_publish_period_sec = 5e-3,  -- 发布姿态的频率
  trajectory_publish_period_sec = 30e-3,  -- 发布轨迹的频率
  rangefinder_sampling_ratio = 1.,  -- 激光雷达采样比例
  odometry_sampling_ratio = 1.,  -- 里程计采样比例（已禁用里程计）
  fixed_frame_pose_sampling_ratio = 1.,  -- 固定框架位姿采样比例
  imu_sampling_ratio = 1.,  -- IMU 采样比例（启用IMU）
  landmarks_sampling_ratio = 1.,  -- 地标采样比例（已禁用）
}

-- 使用2D建图
MAP_BUILDER.use_trajectory_builder_2d = true

-- 激光雷达参数
TRAJECTORY_BUILDER_2D.min_range = 0.10  -- 最小扫描范围
TRAJECTORY_BUILDER_2D.max_range = 10 -- 最大扫描范围
TRAJECTORY_BUILDER_2D.missing_data_ray_length = 3.  -- 最大丢失数据光线长度
TRAJECTORY_BUILDER_2D.use_imu_data = true  -- 启用IMU数据
TRAJECTORY_BUILDER_2D.use_online_correlative_scan_matching = false  -- 启用在线回环检测
TRAJECTORY_BUILDER_2D.motion_filter.max_angle_radians = math.rad(0.1)  -- 限制运动角度
TRAJECTORY_BUILDER_2D.submaps.num_range_data = 35
 
TRAJECTORY_BUILDER_2D.min_range = 0.3
 
TRAJECTORY_BUILDER_2D.max_range = 8.
 
TRAJECTORY_BUILDER_2D.missing_data_ray_length = 1.
 
TRAJECTORY_BUILDER_2D.use_imu_data = true
 
TRAJECTORY_BUILDER_2D.use_online_correlative_scan_matching = true
 
TRAJECTORY_BUILDER_2D.real_time_correlative_scan_matcher.linear_search_window = 0.1
 
TRAJECTORY_BUILDER_2D.real_time_correlative_scan_matcher.translation_delta_cost_weight = 10.
 
TRAJECTORY_BUILDER_2D.real_time_correlative_scan_matcher.rotation_delta_cost_weight = 1e-1
 
TRAJECTORY_BUILDER.collate_landmarks = on

-- 回环检测与优化
POSE_GRAPH.optimization_problem.huber_scale = 1e2

POSE_GRAPH.optimize_every_n_nodes = 35

POSE_GRAPH.constraint_builder.min_score = 0.65

return options

--MAP_BUILDER.use_trajectory_builder_2d = true
-- 
-- 
-- 
--TRAJECTORY_BUILDER_2D.submaps.num_range_data = 35
-- 
--TRAJECTORY_BUILDER_2D.min_range = 0.3
-- 
--TRAJECTORY_BUILDER_2D.max_range = 8.
-- 
--TRAJECTORY_BUILDER_2D.missing_data_ray_length = 1.
-- 
--TRAJECTORY_BUILDER_2D.use_imu_data = true
-- 
--TRAJECTORY_BUILDER_2D.use_online_correlative_scan_matching = true
-- 
--TRAJECTORY_BUILDER_2D.real_time_correlative_scan_matcher.linear_search_window = 0.1
-- 
--TRAJECTORY_BUILDER_2D.real_time_correlative_scan_matcher.translation_delta_cost_weight = 10.
-- 
--TRAJECTORY_BUILDER_2D.real_time_correlative_scan_matcher.rotation_delta_cost_weight = 1e-1
-- 
--TRAJECTORY_BUILDER.collate_landmarks = on
-- 
-- 
-- 
--POSE_GRAPH.optimization_problem.huber_scale = 1e2
-- 
--POSE_GRAPH.optimize_every_n_nodes = 35
-- 
--POSE_GRAPH.constraint_builder.min_score = 0.65

--options = {
--  map_builder = MAP_BUILDER,
--  trajectory_builder = TRAJECTORY_BUILDER,
--  map_frame = "map",
--  tracking_frame = "base_link,  -- 保持为 base_link 来进行跟踪
--  published_frame = "base_link",  -- 保持 base_link 为发布的位姿框架
--  odom_frame = "base_link",  -- 保持 odom 框架用于里程计
--  provide_odom_frame = false,
--  publish_frame_projected_to_2d = false,
--  use_odometry = false,
--  use_nav_sat = false,
--  use_landmarks = false,
--  num_laser_scans = 1,                     
--  num_multi_echo_laser_scans = 0,
--  num_subdivisions_per_laser_scan = 1,
--  num_point_clouds = 0,
--  lookup_transform_timeout_sec = 0.2,
--  submap_publish_period_sec = 0.3,
--  pose_publish_period_sec = 5e-3,
--  trajectory_publish_period_sec = 30e-3,
--  rangefinder_sampling_ratio = 1.,
--  odometry_sampling_ratio = 1.,
--  fixed_frame_pose_sampling_ratio = 1.,
--  imu_sampling_ratio = 1.,
--  landmarks_sampling_ratio = 1.
--}
--
--MAP_BUILDER.use_trajectory_builder_2d = true
--
--
--TRAJECTORY_BUILDER_2D.submaps.num_range_data = 35
--TRAJECTORY_BUILDER_2D.min_range = 0.3
--TRAJECTORY_BUILDER_2D.max_range = 8.
--TRAJECTORY_BUILDER_2D.missing_data_ray_length = 1.
--TRAJECTORY_BUILDER_2D.use_imu_data = true
--TRAJECTORY_BUILDER_2D.use_online_correlative_scan_matching = true
--TRAJECTORY_BUILDER_2D.real_time_correlative_scan_matcher.linear_search_window = 0.1
--TRAJECTORY_BUILDER_2D.real_time_correlative_scan_matcher.translation_delta_cost_weight = 10.
--TRAJECTORY_BUILDER_2D.real_time_correlative_scan_matcher.rotation_delta_cost_weight = 1e-1
--TRAJECTORY_BUILDER_2D.submaps.num_range_data = 90
--TRAJECTORY_BUILDER_2D.imu_gravity_time_constant = 10.0
-- 
--POSE_GRAPH.optimization_problem.huber_scale = 1e2
--POSE_GRAPH.optimize_every_n_nodes = 35
--
--
--return options
--
--