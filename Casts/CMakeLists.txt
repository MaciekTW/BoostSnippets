cmake_minimum_required(VERSION 3.19.2)

project(BoostTest)
set (CMAKE_CXX_STANDARD 20)

FIND_PACKAGE(Boost 1.77 COMPONENTS program_options REQUIRED )
INCLUDE_DIRECTORIES( ${Boost_INCLUDE_DIR} )

add_executable(lexicalCast lexicalCast.cpp)
add_executable(numericCast numericCast.cpp)
add_executable(polymorphicCast polymorphicCast.cpp)

TARGET_LINK_LIBRARIES( lexicalCast LINK_PUBLIC ${Boost_LIBRARIES} )
TARGET_LINK_LIBRARIES( numericCast LINK_PUBLIC ${Boost_LIBRARIES} )
TARGET_LINK_LIBRARIES( polymorphicCast LINK_PUBLIC ${Boost_LIBRARIES} )
