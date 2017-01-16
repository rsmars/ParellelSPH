#rsmars@2017-1-16 14:44:32
#Fluid System in Fluid.
CMAKE_MINIMUM_REQUIRED( VERSION 2.4 )

PROJECT(FluidSystem)
#CUDA
INCLUDE(FindCUDA)
SET(CUDA_NVCC_FLAGS "-arch=sm_35")

#GLM
INCLUDE_DIRECTORIES(${GLM_INC_DIR})

#Project Files
FILE(GLOB cu *.cu)
FILE(GLOB cuh *.cuh)
FILE(GLOB cpp *.cpp)
FILE(GLOB chead *.h)
#SET(FluidSys_SRC 
#	"./*.h" "./*.cpp" "./*.cu")

CUDA_ADD_EXECUTABLE(FluidSystem ${cpp} ${chead} ${cu} ${cuh}) 