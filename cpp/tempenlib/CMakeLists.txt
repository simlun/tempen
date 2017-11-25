add_library(Led Led.cpp)
target_include_directories (Led PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})

add_library(MicroController MicroController.cpp)
target_include_directories (MicroController PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})

add_library(Blinky Blinky.cpp)
target_include_directories (Blinky PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})