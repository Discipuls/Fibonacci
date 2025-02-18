cmake_minimum_required(VERSION 3.10)

project(Fibonacci)

enable_testing()

add_executable(Fibonacci fibonacci.cpp tests/tests.cpp)

set(CMAKE_PREFIX_PATH "~/prog/vcpkg/installed/x64-linux" CACHE STRING "vcpkg prefix path")

find_package(GTest CONFIG REQUIRED)

target_link_libraries(Fibonacci PRIVATE GTest::gtest GTest::gtest_main GTest::gmock GTest::gmock_main)

add_test(NAME FibonacciTest COMMAND Fibonacci)

