#ifndef MOVIES_H
#define MOVIES_H

#include "Movies.h"

using namespace std;


class Movies {
    private:
        vector<Movie> recommendedMovies;
        vector<string> availableSubGenres;
        vector<string> availableGenres;
        vector<Movie> allMovies();

    public:
        Movies();
        void SortRecommendedMoviesbyName();
        void SortRecommendedMoviesbyRelease();
        void SortRecommendedMoviesbyPopularity();
        void PrintRecomendedMovies();
        void PrintAvailableGenres();
        void PrintAvailableSubGenres();
        Movie getMovie();
        void generateRecommendations();

};

#endif