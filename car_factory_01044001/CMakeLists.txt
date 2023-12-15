cmake_minimum_required(VERSION 3.26)
project(car_factory_01044001)

set(CMAKE_CXX_STANDARD 17)

add_executable(car_factory_01044001 main.cpp
        Factories.h
        CarComponent.h
        Car.cpp
        Car.h
        CarConfigurator.h
)
