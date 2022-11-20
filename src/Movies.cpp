#include "../include/Movies.h"
#include "../include/DatasetAccessor.h"

Movies::Movies()
{
    DatasetAccessor movieDataset;
    allMovies = movieDataset.generateMoviesVector();
}


void Movies::generateRecommendationsDirector(string directorName){
    for (int i=0; i<allMovies.size(); i++){
        if (allMovies[i].getDirector()==directorName){
            recommendedMovies.push_back(allMovies[i]);
        }
    }
    this->recommendedMovies=recommendedMovies;
}