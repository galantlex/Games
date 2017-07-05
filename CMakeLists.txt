cmake_minimum_required(VERSION 3.5.1)
project(SFMLCollisionDetection)

set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

if(CMAKE_COMPILER_IS_GNUCXX)
    set(CMAKE_CXX_FLAGS "-Wall -Wextra")
endif()

include_directories(
    ${PROJECT_SOURCE_DIR}
)

add_executable(
    puzzle
    ${PROJECT_SOURCE_DIR}/termfuncs.cpp
    ${PROJECT_SOURCE_DIR}/puzzle.cpp
    ${PROJECT_SOURCE_DIR}/main.cpp
)
