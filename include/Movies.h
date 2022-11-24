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


        void SortRecommendedMoviebyRating(vector<Movie> MoviesToReturn);
        void SortRecommendedMoviesbyName(vector<Movie> MoviesToReturn);
        void SortRecommendedMoviesbyRelease(vector<Movie> MoviesToReturn);
        void SortRecommendedMoviesbyPopularity(vector<Movie> MoviesToReturn);

        // prints 10 movies max for every page
        // returns number of movies printed (for testing)
        // starts with page 0
        int PrintRecommendedMovies(int pageNumber);
        void PrintAvailableGenres();
        void PrintAvailableSubGenres();
        Movie getMovie();
        void generateRecommendations();

};

#endif