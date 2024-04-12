add_library(MyLibrary MyPrint.cxx)

target_include_directories(MyLibrary INTERFACE "${CMAKE_CURRENT_SOURCE_DIR}")