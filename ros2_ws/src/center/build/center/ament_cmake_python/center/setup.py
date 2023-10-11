from setuptools import find_packages
from setuptools import setup

setup(
    name='center',
    version='0.0.0',
    packages=find_packages(
        include=('center', 'center.*')),
)
