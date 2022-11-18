cmake_minimum_required(VERSION 3.8)

set(This TestMovieRecommendations)

set(Sources
    test.cpp
)
add_executable(data
  src/DatasetAccessor.cpp
  src/Movie.cpp
  src/Movies.cpp
  src/main.cpp
)

add_executable(${This} ${Sources})
target_link_libraries(${This} PUBLIC
    gtest_main
    MovieRecommendations
)


add_test(
    NAME ${This}
    COMMAND ${This}
)