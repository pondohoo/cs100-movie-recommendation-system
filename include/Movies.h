#ifndef MOVIES_H
#define MOVIES_H

#include "Movie.h"

using namespace std;


class Movies {
    private:
        vector<Movie> recommendedMovies;
        vector<Movie> allMovies;

    public:
        // utilizes DatasetAccessor to create a vector of all movies and
        // initialize vector<Movie> allMovies to that vector
        Movies();


        void SortRecommendedMoviesbyName();
        void SortRecommendedMoviesbyRelease();
        void SortRecommendedMoviesbyPopularity();
        void PrintRecomendedMovies();
        Movie getMovie();

        // if basis == 1, generates recommendations based on name
        // if basis == 2, generates recommendations based on genre
        // if basis == 3, generates recommendations based on starring actor
        // if basis == 4, generates recommendatinos based on director
        // if basis is anything else, does nothing
        void generateRecommendations(string basisName, int basis);

};

#endif