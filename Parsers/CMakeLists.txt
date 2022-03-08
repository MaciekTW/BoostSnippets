cmake_minimum_required(VERSION 3.19.2)

project(BoostTest)
set (CMAKE_CXX_STANDARD 20)

FIND_PACKAGE(Boost 1.77 COMPONENTS program_options REQUIRED )
INCLUDE_DIRECTORIES( ${Boost_INCLUDE_DIR} )

add_executable(parsersRun ParserStart.cpp SimpleParser.cpp)

TARGET_LINK_LIBRARIES( parsersRun LINK_PUBLIC ${Boost_LIBRARIES} )
