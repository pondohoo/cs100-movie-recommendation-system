#include "../include/Movies.h"
#include "../include/DatasetAccessor.h"
#include "../include/Movie.h"
#include <iostream>

Movies::Movies()
{
    DatasetAccessor movieDataset;
    allMovies = movieDataset.generateMoviesVector();
}


int Movies::PrintRecommendedMovies(int pageNumber){
    int movieCounter = 0;
    bool atLeastOneMovie = false;
    // pageNumber == 0-> items 0->10
    // pageNumber == 1-> items 10->20
    // pageNumber == 5-> items 50->60
    for(int i = pageNumber*10;i<i+10&&i<this->recommendedMovies.size();i++) {
        ++movieCounter;
        atLeastOneMovie = true;
        cout<<this->recommendedMovies.at(i).getName()<<'\n';
    }
    if (!atLeastOneMovie)
    {
        cout << "No movies found!";
    }
    return movieCounter;
}


