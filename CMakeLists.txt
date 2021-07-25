cmake_minimum_required(VERSION 3.10)
project(UNIV)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED on )
set(FILES student.cpp) # zmienna FILES zawiera main i studen 
set(MAIN main.cpp)



add_library(${PROJECT_NAME}-lib STATIC ${FILES})

add_executable(${PROJECT_NAME} ${MAIN} ${FILES})

target_link_libraries(${PROJECT_NAME} ${PROJECT_NAME}-lib)

target_compile_options(${PROJECT_NAME}-lib PRIVATE -Wall -Wextra -Werror -pedantic -Wconversion -O3)

set_target_properties(${PROJECT_NAME} PROPERTIES
                      CXX_STANDARD 17
                      CXX_STANDARD_REQUIRED ON)
