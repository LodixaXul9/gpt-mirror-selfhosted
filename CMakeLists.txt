cmake_minimum_required(VERSION 3.16)
project(gpt-mirror-selfhosted CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(gptmirrorselfhosted
    src/main.cpp
    src/server.cpp
    src/auth.cpp
    src/quota.cpp
)

target_include_directories(gptmirrorselfhosted PRIVATE include)

if(WIN32)
    target_link_libraries(gptmirrorselfhosted PRIVATE userenv)
endif()
