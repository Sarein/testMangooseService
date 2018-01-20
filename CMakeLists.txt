cmake_minimum_required(VERSION 2.8)

set(PROJECT_NAME MongooseServer)

project(${PROJECT_NAME})

set(KOMPEX_SQLite D:/InstallStash/kompexSQLiteWrapper/lib/libkompexSQLiteWrapper.a)

set(Boost_USE_STATIC_LIBS ON)

find_package(Boost COMPONENTS filesystem program_options REQUIRED)

include_directories(${CMAKE_CURRENT_SOURCE_DIR})

include_directories(D:/InstallStash/kompexSQLiteWrapper/include)

include_directories (${Boost_INCLUDE_DIR})

file(GLOB SOURCE "*.cpp" "*.h")

set(CMAKE_EXE_LINKER_FLAGS "-static")

add_executable(${PROJECT_NAME} ${SOURCE})

target_link_libraries(
    ${PROJECT_NAME}
    ${Boost_PROGRAM_OPTIONS_LIBRARY}
    ${KOMPEX_SQLite}
    )
