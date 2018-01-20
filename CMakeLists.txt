cmake_minimum_required(VERSION 2.8)

set(PROJECT_NAME MongooseServer)

project(${PROJECT_NAME})

set(BOOST_ROOT C:/Program Files/boost_1_64_0)

set(KOMPEX_SQLite D:/InstallStash/kompexSQLiteWrapper/lib/libkompexSQLiteWrapper.a)

find_package(Boost COMPONENTS filesystem program_options REQUIRED)

include_directories(${CMAKE_CURRENT_SOURCE_DIR})

if(Boost_FOUND)
MESSAGE("OLOLOLO" ${Boost_INCLUDE_DIR})
endif()

include_directories (SYSTEM ${Boost_INCLUDE_DIR})

file(GLOB SOURCE "*.cpp" "*.h")

add_subdirectory(${CMAKE_CURRENT_SOURCE_DIR}/kompexSQLiteWraper)

add_executable(${PROJECT_NAME} ${SOURCE})

target_link_libraries(
    ${PROJECT_NAME}
    ${Boost_LIBRARY_DIR}
    ${KOMPEX_SQLite}
    )
