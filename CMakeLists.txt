
cmake_minimum_required(VERSION 3.12)
project(lime_processing)

set(CMAKE_CXX_STANDARD 14)

set( CMAKE_BUILD_TYPE "Release" )
set( CMAKE_CXX_FLAGS "-std=c++11 -O3" )

list( APPEND CMAKE_MODULE_PATH ${PROJECT_SOURCE_DIR}/cmake_modules )


set( EXECUTABLE_OUTPUT_PATH ${PROJECT_SOURCE_DIR}/bin )
set( LIBRARY_OUTPUT_PATH ${PROJECT_SOURCE_DIR}/lib )  

find_package( OpenCV 3.1.0 REQUIRED )

include_directories( 
    ${OpenCV_INCLUDE_DIRS} 

)


include_directories( ${PROJECT_SOURCE_DIR}/include )

add_subdirectory( src )
add_subdirectory( test )







