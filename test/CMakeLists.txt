cmake_minimum_required(VERSION 3.21)
project(test)

set(CMAKE_CXX_STANDARD 17)

add_executable(test catch.hh product_tests.cpp catch_config.cpp ../product.h ../product.cpp ../date.cpp ../date.h ../producer.h ../producer.cpp ../component.cpp ../component.h)
