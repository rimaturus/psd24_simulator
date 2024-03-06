from setuptools import find_packages, setup

package_name = 'gui_control'

setup(
    name=package_name,
    version='0.0.0',
    packages=find_packages(exclude=['test']),
    data_files=[
        ('share/ament_index/resource_index/packages',
            ['resource/' + package_name]),
        ('share/' + package_name, ['package.xml']),
    ],
    install_requires=['setuptools', 'python3-tk'],
    zip_safe=True,
    maintainer='ed',
    maintainer_email='e.caciorgna@studenti.unipi.it',
    description='TODO: Package description',
    license='TODO: License declaration',
    tests_require=['pytest'],
    entry_points={
        'console_scripts': [
                'gui_control = gui_control.gui_control:main',
        ],
    },
)
