cmake_minimum_required(VERSION 3.10)
project(Valid_Anagram)

if(CMAKE_COMPILER_IS_GNUCXX OR CMAKE_CXX_COMPILER_ID MATCHES "Clang")
  add_compile_options(-Wall -Wextra -Wpedantic)
endif()

add_executable(solution Valid_Anagram_Solution.cpp)
install(TARGETS solution
 DESTINATION lib/${PROJECT_NAME})