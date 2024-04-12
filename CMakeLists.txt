cmake_minimum_required(VERSION 3.22)

project(CmakeExample VERSION 1.0)

add_executable(example main.cxx)

target_include_directories(example PUBLIC "${PROJECT_BINARY_DIR}")

# Adding your own library
add_subdirectory(MyLibrary)
target_link_libraries(example PUBLIC MyLibrary)

# Adding a third party library
add_subdirectory(hdf5-1.14.3/CMake-hdf5-1.14.3/hdf5-1.14.3/c++/src)

