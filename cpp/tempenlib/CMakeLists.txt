add_library(Blinky
        Blinky.cpp Blinky.h
        ControlLoop.h
        Stopwatch.h
        MicroController.cpp MicroController.h
        Led.cpp Led.h
        )
target_include_directories(Blinky PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})

add_library(RemoteBlinky
        Blinky.cpp Blinky.h
        ControlLoop.h
        Stopwatch.h
        MicroController.cpp MicroController.h
        Led.cpp Led.h
        Receiver.cpp Receiver.h
        RemoteLed.cpp RemoteLed.h
        Sender.h
        RemoteLedController.cpp RemoteLedController.h
        ControlLoop.h
        RemoteLedProtocol.h
        )
target_include_directories(RemoteBlinky PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})

add_library(Tempen
        Task.cpp Task.h
        Clerk.cpp Clerk.h
        MicroController.cpp MicroController.h
        ControlLoop.h
        )
target_include_directories(Tempen PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})
