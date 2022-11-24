set(This MovieRecommendations)

project(${This} C CXX)

set(CMAKE_C_STANDARD 99)
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_POSITION_INDEPENDENT_CODE ON)

enable_testing()

add_subdirectory(googletest)


set(Headers
    ./include/DatasetAccessor.h
    ./include/Movie.h
    ./include/Movies.h
    ./include/InputOutputHandler.h
)
set(Sources
    ./src/Movie.cpp
    ./src/Movies.cpp
    ./src/DatasetAccessor.cpp
    ./src/InputOutputHandler.cpp
)
add_library(${This} STATIC ${Sources} ${Headers})
add_executable(${This} ${Sources})


# looks for the test subdirectory and runs the child CMakeLists
add_subdirectory(test) 
add_subdirectory(mainExecutable) 


