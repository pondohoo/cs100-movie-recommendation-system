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




        // prints 10 movies max for every page
        // returns number of movies printed (for testing)
        // starts with page 0
        int PrintRecommendedMovies(int pageNumber);


        void SortRecommendedMoviesbyName();
        void SortRecommendedMoviesbyRelease();
        void SortRecommendedMoviesbyPopularity();
        // utilize the heap sort algorithm to sort the recommendedMovies vector by rating from greatest to least
        void SortRecommendedMoviesbyRating();
        
        // get a Movie object from allMovies based on name
        Movie getMovie(string movieName);

        // check if user entered actor exists
        bool doesActorExist(string actorName);
        // check if user entered director exists
        bool doesDirectorExist(string directorName);

        // if basis == 1, generates recommendations based on name
        // if basis == 2, generates recommendations based on genre
        // if basis == 3, generates recommendations based on starring actor
        // if basis == 4, generates recommendatinos based on director
        // if basis is anything else, does nothing
        void generateRecommendations(string basisName, int basis);

    private:
        // helper functions

        // helper function that is called by ratingsort function
        // swaps the least to the top of the vector with heap property
        void heapify_Rating(int , int );
        void heapify_Release(int n, int i);
        void heapify_Popularity(int n, int i);

        // called from generateRecommendations, initializes recommendedMovies list based
        // on genre parameter
        void generateRecommendationsGenre(string genreName);

        // called from generateRecommendations, initializes recommendedMovies list based
        // on actor parameter
        void generateRecommendationsActor(string actorName);

        // called from generateRecommendations, initializes recommendedMovies list based
        // on director parameter
        void generateRecommendationsDirector(string directorName);

    public:
        // functions only used in unit tests to 
        //      -get a movie from reccommendedMovies
        //      -push directly to the reccommendedMovies vector,
        //      -get a movie from allMovies vector
        //      -get size of recommendedMovies vector
        Movie getMovieTestingOnly(int );
        void testPushBackforTestingOnly(Movie );
        Movie getallMoviesmovieForTestingOnly(int i);
        int sizeofRecommendedForTestingOnly();

};

#endif