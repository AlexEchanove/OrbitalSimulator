cmake_minimum_required(VERSION 3.28)
project(OrbitalSimulator)

set(CMAKE_CXX_STANDARD 17)

add_executable(OrbitalSimulator main.cpp
        Objects/Celestialbody.cpp
        Objects/Celestialbody.h
        main.h
        DataReport/DataPrint.cpp
        DataReport/DataPrint.h
        Simulator/MainLoop.cpp
        Simulator/MainLoop.h
)
