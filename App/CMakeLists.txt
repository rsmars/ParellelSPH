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
SET(FluidApp_SRC 
	GLApp.h GLApp.cpp
	main.cpp)

ADD_EXECUTABLE(Application ${FluidApp_SRC})
TARGET_LINK_LIBRARIES(Application ${GLUT_glut_LIBRARY})