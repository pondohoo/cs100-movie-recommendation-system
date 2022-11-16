cmake_minimum_required(VERSION 3.8)

set(This RunMovieRecommendations)

set(Sources
    ../src/main.cpp
)

add_executable(${This} ${Sources})
target_link_libraries(${This} PUBLIC
    MovieRecommendations
)




