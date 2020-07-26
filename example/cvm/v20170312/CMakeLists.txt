cmake_minimum_required (VERSION 3.1)
project(DescribeInstances)

set(CMAKE_CXX_STANDARD 11)

add_executable(DescribeInstances DescribeInstances.cpp)
add_executable(DescribeInstancesAsync DescribeInstancesAsync.cpp)
target_link_libraries(DescribeInstances tencentcloud-sdk-cpp-intl-en-cvm tencentcloud-sdk-cpp-intl-en-core)
target_link_libraries(DescribeInstancesAsync tencentcloud-sdk-cpp-intl-en-cvm tencentcloud-sdk-cpp-intl-en-core)
