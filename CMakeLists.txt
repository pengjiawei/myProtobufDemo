cmake_minimum_required(VERSION 3.9)
set(CMAKE_CXX_STANDARD 11)
add_definitions(-std=c++11
        -D_GLIBCXX_USE_CXX11_ABI=0
        )

find_package(Protobuf REQUIRED)


find_package(PkgConfig REQUIRED)
pkg_check_modules(PROTOBUF REQUIRED protobuf)

set(SOURCE_FILE writer.cpp hello.pb.cc hello.pb.h)
add_executable(writer ${SOURCE_FILE})
add_executable(reader reader.cpp hello.pb.cc hello.pb.h)

target_link_libraries(writer protobuf)