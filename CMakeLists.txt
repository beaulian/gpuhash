cmake_minimum_required(VERSION 3.11)
project(gpuhash LANGUAGES CXX CUDA)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -O2")

# command line
set(GPU_ARCHITECTURE "sm_61" CACHE STRING "Target GPU architecture")

set(CUDA_NVCC_FLAGS ${CUDA_NVCC_FLAGS} 
					${CUDA_NVCC_DEBUG_FLAGS} 
					-arch=${GPU_ARCHITECTURE} 
					-use_fast_math
)

find_package(CUDA REQUIRED)