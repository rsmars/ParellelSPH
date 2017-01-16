#rsmars@2017-1-16 14:44:32
#project : Application in Fluid.
CMAKE_MINIMUM_REQUIRED( VERSION 2.4 )

PROJECT(Application)

#OpenGL
INCLUDE(FindGLUT)
INCLUDE_DIRECTORIES(${GLUT_INCLUDE_DIR})

#GLM
INCLUDE_DIRECTORIES(${GLM_INC_DIR})

#Project Files
FILE(GLOB cu *.cu)
FILE(GLOB cuh *.cuh)
FILE(GLOB cpp *.cpp)
FILE(GLOB chead *.h)

ADD_EXECUTABLE(Application ${cpp} ${chead} ${cu} ${cuh})
TARGET_LINK_LIBRARIES(Application ${GLUT_glut_LIBRARY})