cmake_minimum_required(VERSION 3.1)
project(ForkJoinThreadPool)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES main.cpp)
add_executable(ForkJoinThreadPool ${SOURCE_FILES} classes/ForkJoinThreadPool.cpp classes/ForkJoinThreadPool.h Application.cpp Application.h support/UnCopyable.h classes/future/IFuture.h)