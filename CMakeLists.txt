cmake_minimum_required(VERSION 3.7)
project(max)

set(CMAKE_CXX_STANDARD 11)

include_directories(header)

set(SOURCE_FILES src/max.cpp src/Person.cpp header/Person.h header/BankAccount.h src/Accumulator.cpp header/Accum.h)
add_executable(max ${SOURCE_FILES})