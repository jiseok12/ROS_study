import os
from launch import LaunchDescription
from launch_ros.actions import Node
from launch.substitutions import LaunchConfiguration
from ament_index_python import get_package_share_directory
from launch.actions import DeclareLaunchArgument
def generate_launch_description():
    param_dir = LaunchConfiguration("param_dir", 
                                    default=os.path.join(get_package_share_directory("turtle_move"), 
                                                         "param",
                                                         "turtlesim.yaml"))
    
    return LaunchDescription([
        DeclareLaunchArgument(
            "param_dir",
            default_value=param_dir
            ),
        Node(
            package="turtle_move",
            executable="moveTurtlebot",
            parameters=[param_dir],
            output="screen"
            ),
        ]
    )