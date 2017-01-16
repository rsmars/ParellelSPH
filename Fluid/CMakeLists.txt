#rsmars@2017-1-16 14:44:32
#Fluid System in Fluid.
CMAKE_MINIMUM_REQUIRED( VERSION 2.4 )

PROJECT(FluidSystem)
#CUDA
INCLUDE(FindCUDA)

#GLM
INCLUDE_DIRECTORIES(${GLM_INC_DIR})

#Project Files
SET(FluidSys_SRC 
	hello.cpp)

CUDA_ADD_EXECUTABLE(FluidSystem ${FluidSys_SRC})