cmake_minimum_required (VERSION 3.20)
project (swiftfly)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Wall -Wextra")

find_library(APPLE_FWK_FOUNDATION Foundation REQUIRED)
find_library(APPLE_FWK_QUARTZ_CORE QuartzCore REQUIRED)
find_library(APPLE_FWK_METAL Metal REQUIRED)
find_library(APPLE_FWK_METAL_KIT MetalKit REQUIRED)
find_library(APPLE_FWK_APP_KIT AppKit REQUIRED)

add_executable(swiftfly
  main_vulkan.cc
)

target_include_directories(swiftfly
  SYSTEM PUBLIC ${CMAKE_SOURCE_DIR}/vender/metal-cpp
  SYSTEM PUBLIC ${CMAKE_SOURCE_DIR}/vender/metal-cpp-extensions
  SYSTEM PUBLIC ${VULKAN_INCLUDE_DIRS}
)

target_link_libraries(swiftfly
  ${APPLE_FWK_FOUNDATION}
  ${APPLE_FWK_QUARTZ_CORE}
  ${APPLE_FWK_METAL}
  ${APPLE_FWK_METAL_KIT}
  ${APPLE_FWK_APP_KIT}
)
