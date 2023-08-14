cmake_minimum_required (VERSION 3.20)
project (metal_cpp_rocks)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Wall -Wextra -Werror")

find_library(APPLE_FWK_FOUNDATION Foundation REQUIRED)
find_library(APPLE_FWK_QUARTZ_CORE QuartzCore REQUIRED)
find_library(APPLE_FWK_METAL Metal REQUIRED)
find_library(APPLE_FWK_METAL_KIT MetalKit REQUIRED)
find_library(APPLE_FWK_APP_KIT AppKit REQUIRED)

add_executable(metal_cpp_rocks
  main.cc
)

target_include_directories(metal_cpp_rocks
  SYSTEM PUBLIC ${CMAKE_SOURCE_DIR}/metal-cpp
  SYSTEM PUBLIC ${CMAKE_SOURCE_DIR}/metal-cpp-extensions
)

target_link_libraries(metal_cpp_rocks
  ${APPLE_FWK_FOUNDATION}
  ${APPLE_FWK_QUARTZ_CORE}
  ${APPLE_FWK_METAL}
  ${APPLE_FWK_METAL_KIT}
  ${APPLE_FWK_APP_KIT}
)