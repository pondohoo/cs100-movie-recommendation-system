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

        
        void SortRecommendedMoviebyRating();

        //utilize vector<Movie> allMovies to take the initiale index in dataset of the sorted name in alphabetical order for each movies
        //it compute a vector<Movie> recommendedMovies sorted by alphatical order
        void SortRecommendedMoviesbyName();

        //utilize vector<Movie> allMovies to take the initiale index in dataset of the sorted release year for each movies
        //it compute a vector<Movie> recommendedMovies sorted by release year
        void SortRecommendedMoviesbyRelease();

        //utilize vector<Movie> allMovies to take the initiale index in dataset of the sorted rating for each movies
        //it compute a vector<Movie> recommendedMovies sorted by rating
        void SortRecommendedMoviesbyPopularity();

       
        void PrintRecomendedMovies();
        Movie getMovie();
        void generateRecommendations();

};

#endif