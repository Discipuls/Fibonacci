cmake_minimum_required(VERSION 3.10)

# Set the project name
project(Fibonacci)

# Enable testing
enable_testing()

# Add the executable
add_executable(Fibonacci fibonacci.cpp tests/tests.cpp)

#set(CMAKE_PREFIX_PATH "~/prog/vcpkg/installed/x64-linux" CACHE STRING "vcpkg prefix path")

# Find Google Test
find_package(GTest CONFIG REQUIRED)

# Link Google Test libraries
target_link_libraries(Fibonacci PRIVATE GTest::gtest GTest::gtest_main GTest::gmock GTest::gmock_main)

# Add tests
add_test(NAME FibonacciTest COMMAND Fibonacci)
