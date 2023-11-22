cmake_minimum_required(VERSION 3.14)
project(electric_circuit_breaker)

set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(
  electric_circuit_breaker
  main.c

  lib/network_plug.o

  ./include/connect.h

  src/core/entity/boolean.h
  src/core/entity/breaker.h
  src/core/entity/monitor.h
  src/core/entity/receiver.h

  src/core/usecases/usecases.h
  src/core/usecases/circuit_breaker_on.c
  src/core/usecases/circuit_breaker_off.c
  src/core/usecases/monitor_network_health.c
  src/core/usecases/wait_for_signal.c

  #src/infra/*
)

target_include_directories(electric_circuit_breaker PRIVATE include)
target_include_directories(electric_circuit_breaker PRIVATE src/core/entity)
target_include_directories(electric_circuit_breaker PRIVATE src/core/usecases)
