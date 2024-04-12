cmake_minimum_required(VERSION 3.22)

project(CmakeExample VERSION 1.0)

add_executable(example main.cxx)

target_include_directories(example PUBLIC "${PROJECT_BINARY_DIR}")

# Adding your own library
add_subdirectory(MyLibrary)
target_link_libraries(example PUBLIC MyLibrary)

# Adding a third party library
set(HDF5DIR "/hdf5/build")
target_include_directories(read PRIVATE ${HDF5DIR}/include)
target_link_directories(read PRIVATE ${HDF5DIR}/lib)
target_link_libraries(read PRIVATE libhdf5.so libhdf5_cpp.so)

