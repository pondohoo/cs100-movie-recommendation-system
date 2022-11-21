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

        // get a Movie object from allMovies based on name
        Movie getMovie(string movieName);



        // if basis == 1, generates recommendations based on name
        // if basis == 2, generates recommendations based on genre
        // if basis == 3, generates recommendations based on starring actor
        // if basis == 4, generates recommendatinos based on director
        // if basis is anything else, does nothing
        void generateRecommendations(string basisName, int basis);

    private:
        // helper functions

        // called from generateRecommendations, initializes recommendedMovies list based
        // on genre parameter
        void generateRecommendationsGenre(string genreName);

        // called from generateRecommendations, initializes recommendedMovies list based
        // on actor parameter
        void generateRecommendationsActor(string actorName);

        // called from generateRecommendations, initializes recommendedMovies list based
        // on director parameter
        void generateRecommendationsDirector(string directorName);

};

#endif