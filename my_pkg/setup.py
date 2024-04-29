from setuptools import find_packages, setup
import os
from glob import glob

package_name = 'my_pkg'
share_dir = 'share/'+ package_name
setup(
    name=package_name,
    version='0.0.0',
    packages=find_packages(exclude=['test']),
    data_files=[
        ('share/ament_index/resource_index/packages',
            ['resource/' + package_name]),
        ('share/' + package_name, ['package.xml']),
        ('share/' + package_name + '/launch', glob(os.path.join('launch', '*.launch.py'))),
        (share_dir + '/param', glob(os.path.join('param', '*.yaml'))),
    ],
    install_requires=['setuptools'],
    zip_safe=True,
    maintainer='aa',
    maintainer_email='freshmea@naver.com',
    description='TODO: Package description',
    license='TODO: License declaration',
    tests_require=['pytest'],
    entry_points={
        'console_scripts': [
            'simplepub = my_pkg.simplepub:main',
            'simplesub = my_pkg.simplesub:main',
            'simpletimepub = my_pkg.simpletimepub:main',
            'simpletimesub = my_pkg.simpletimesub:main',
            'mpub = my_pkg.simple_message_pub:main',
            'msub = my_pkg.simple_message_sub:main',
            'tpub = my_pkg.simple_time_pub:main',
            'tsub = my_pkg.simple_time_sub:main',
            'm2sub = my_pkg.simple_message_sub2:main',
            'mtsub = my_pkg.simple_message_time_sub:main',
            'myinterfacepub = my_pkg.simple_myinterface_pub:main',
            'myinterfacesub = my_pkg.simple_myinterface_sub:main',
            'msrvserver = my_pkg.simple_srv_server:main',
            'msrvclient = my_pkg.simple_srv_client:main',
            'mactionserver = my_pkg.simple_action_server:main',
            'mactionclient = my_pkg.simple_action_client:main'
        ],
    },
)
