cmake_minimum_required(VERSION 2.8.9)
project(cauliflower_Lsystem)

#Bring the headers into the project
include_directories(include)

#Can manually add the sources using the set command as follows:
#set(SOURCES src/glad.c src/hellowindow.cpp)



#However, the file(GLOB...) allows for wildcard additions:
file(GLOB SOURCES "src/*.cpp")

add_executable(flower ${SOURCES})

find_package(GLUT REQUIRED)
find_package(OpenGL REQUIRED)
include_directories( ${OPENGL_INCLUDE_DIRS}  ${GLUT_INCLUDE_DIRS} )
target_link_libraries(flower  ${OPENGL_LIBRARIES} ${GLUT_LIBRARY} )






