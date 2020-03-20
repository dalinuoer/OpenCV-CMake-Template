cmake_minimum_required(VERSION 3.5.0)

project(opencv-test)

find_package(OpenCV REQUIRED)

include_directories(${OpenCV_INCLUDE_DIRS})

set(SOURCES
    src/hello.cpp
    src/main.cpp
)

add_executable(opencv-test ${SOURCES})

target_link_libraries(opencv-test
    ${OpenCV_LIBS}
    ${PROJECT_SOURCE_DIR}/include
)