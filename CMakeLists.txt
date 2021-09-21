cmake_minimum_required (VERSION 3.1)

project (quine)

set (CMAKE_CXX_STANDARD 17)

file(GLOB HEADER_FILES *.h)
file(GLOB SOURCE_FILES *.cpp)

add_executable(quine ${SOURCE_FILES} ${HEADER_FILES})
