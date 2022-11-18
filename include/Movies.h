#ifndef MOVIES_H
#define MOVIES_H

#include "Movie.h"

using namespace std;


class Movies {
    private:
        vector<Movie> recommendedMovies;
        vector<string> availableSubGenres;
        vector<string> availableGenres;
        vector<Movie> allMovies;

    public:
        // utilizes DatasetAccessor to create a vector of all movies and
        // initialize vector<Movie> allMovies to that vector
        Movies();


        void SortRecommendedMoviesbyName();
        void SortRecommendedMoviesbyRelease();
        void SortRecommendedMoviesbyPopularity();
        void SortRecommendedMoviesbyRating();
        void PrintRecomendedMovies();
        void PrintAvailableGenres();
        void PrintAvailableSubGenres();
        Movie getMovieTestingOnly(int );
        void generateRecommendations();
        void testPushBackforTestingOnly(Movie );
        Movie getallMoviesmovieForTestingOnly(int i);

    private:
        void heapify_Rating(int , int );
        // void heap_sort_Rating(vector<Movie> , int );

};

#endif