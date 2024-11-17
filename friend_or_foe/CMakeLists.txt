cmake_minimum_required(VERSION 3.29)
project(friend_or_foe)
include(FetchContent)
include(GoogleTest)

set(CMAKE_CXX_STANDARD 20)
set(gtest_force_shared_crt ON CACHE BOOL "" FORCE)

FetchContent_Declare(
        googletest
        URL https://github.com/google/googletest/archive/6b63c98ac43efc992122f1da12aaf0a0e0658206.zip
        GIT_SHALLOW    1
)
FetchContent_MakeAvailable(googletest)

enable_testing()

add_executable(friendfoetest
        FriendFoe.cpp
        FriendFoe_Tests.cpp
)
target_link_libraries(friendfoetest GTest::gtest_main)
gtest_discover_tests(friendfoetest)
