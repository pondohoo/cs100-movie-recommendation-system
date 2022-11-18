#include "../include/Movies.h"
#include "../include/DatasetAccessor.h"

Movies::Movies()
{
    DatasetAccessor movieDataset;
    allMovies = movieDataset.generateMoviesVector();
}

Movie Movies::getMovie(string movieName)
{
    // search the allMovies for the movie name and return the object associated with that movie name


    // if it's not found maybe you could create and return a Movie object with all
    // string data members as "N/A" and int and double data members as 0 so we can validate it
    // in main
}

void Movies::generateRecommendations(string basisName, int basis)
{
    // recommend by genre
    if (basis == 1)
    {
        // compare genre (stored in basisName) with genre from every movie in allMovies
        // if the genre (stored in basisName) is the current movie genre, add the movie to recommendedMovies
        generateRecommendationsGenre(basisName);
    
    }
    // recommend by actor
    else if (basis == 2)
    {
        // compare actor (stored in basisName) with leadingActor from every movie in allMovies
        // if the actor (sotred in basisName) is the current movie leadingActor, add the movie to recommendedMovies
        generateRecommendationsActor(basisName);
    
    
    
    }
    // recommend by director
    else if (basis == 3)
    {
        // compare director (stored in basisName) with director from every movie in allMovies
        // if the director (stored in basisName) is the current movie director, add the movie to recommendedMovies
        generateRecommendationsDirector(basisName);

    
    
    }
}

void Movies::generateRecommendationsGenre(string genreName)
{
    // search through allMovies for all Movie objects that have the genre given by the parameter genreName
    // if there is a Movie object with that genre, add it to recommendedMovies 
}


void Movies::generateRecommendationsActor(string actorName)
{
    // search through allMovies for all Movie objects that have the actor given by the parameter actorName
    // if there is a Movie object with that actor, add it to recommendedMovies 
}


void Movies::generateRecommendationsDirector(string directorName)
{
    // search through allMovies for all Movie objects that have the director given by the parameter directorName
    // if there is a Movie object with that director, add it to recommendedMovies 
}

void Movies::PrintRecomendedMovies()
{

}