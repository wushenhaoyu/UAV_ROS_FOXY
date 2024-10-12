from setuptools import setup

package_name = 'tf_init'

setup(
    name=package_name,
    version='0.0.1',
    packages=[package_name],
    data_files=[
        ('share/ament_index/resource_index/packages',
            ['resource/' + package_name]),
        ('share/' + package_name, ['package.xml']),
    ],
    install_requires=['setuptools'],
    zip_safe=True,
    maintainer='your_name',
    maintainer_email='your_email@example.com',
    description='A package to publish TF from base_link to map',
    license='MIT',
    tests_require=['pytest'],
    entry_points={
        'console_scripts': [
            'tf_publisher = tf_init.tf_publisher:main',
        ],
    },
)
