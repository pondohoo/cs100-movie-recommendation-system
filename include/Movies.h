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
        // utilize the heap sort algorithm to sort the recommendedMovies vector by rating from greatest to least
        void SortRecommendedMoviesbyRating();
        void PrintRecomendedMovies();
        void PrintAvailableGenres();
        void PrintAvailableSubGenres();
        void generateRecommendations();
        
        // functions only used in unit tests to 
        //      -push directly to the reccommendedMovies vector,
        //      -get a movie from allmovies to push into reccommendMovies
        //      -get a movie from reccommendedMovies

        Movie getMovieTestingOnly(int );
        void testPushBackforTestingOnly(Movie );
        Movie getallMoviesmovieForTestingOnly(int i);

    private:
        // helper function that is called by ratingsort function
        // swaps the least to the top of the vector with heap property
        void heapify_Rating(int , int );

        // void heap_sort_Rating(vector<Movie> , int );

};

#endif