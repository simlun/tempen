add_library(Led Led.cpp)
target_include_directories(Led PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})

add_library(MicroController MicroController.cpp)
target_include_directories(MicroController PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})

add_library(Blinky Blinky.cpp)
target_include_directories(Blinky PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})

add_library(Receiver Receiver.cpp)
target_include_directories(Receiver PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})

add_library(RemoteLed RemoteLed.cpp)
target_include_directories(RemoteLed PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})

add_library(RemoteLedController RemoteLedController.cpp)
target_include_directories(RemoteLedController PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})

add_library(Tempen Task.cpp Task.h Clerk.cpp Clerk.h)
target_include_directories(Tempen PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})
