from setuptools import find_packages
from setuptools import setup

setup(
    name='psd_vehicle_interfaces',
    version='0.0.0',
    packages=find_packages(
        include=('psd_vehicle_interfaces', 'psd_vehicle_interfaces.*')),
)
