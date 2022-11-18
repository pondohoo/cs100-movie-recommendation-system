#include "../include/Movies.h"
#include "../include/InputOutputHandler.h"





int main() {

    //initialize the interface of the movie dataset and recommendations
    Movies movieRecommendationInterface;

    //initialize an input output handler that will display the menu functions
    InputOutputHandler iohandler;


    // User is given the option to be recommended movies based on
    // A movie name
    // A genre name
    // An actor name
    // A director name
    int option = iohandler.handleIntroOptions();
    string movieName;
    string directorName;
    string actorName;
    string genreName;

    // recommend based on name (a specific movie)
    if (option == 1)
    {
        movieName = iohandler.handleNameRecommendationOption(movieRecommendationInterface);
        
        // if the user enters a name, ask if they would like a recommendation based on that movie's:
        // genre, actor, director

        // get the movie object from the list
        Movie currMovie = movieRecommendationInterface.getMovie(movieName);

        // check what on basis the user would like to see a recommendation for the specific movie
        int movieGenreSubgenreChoice = iohandler.handleSpecificMovieOptions();


        
        if (movieGenreSubgenreChoice == 1)
        {
            // recommend based on that movie's genre
            movieRecommendationInterface.generateRecommendations(currMovie.getGenre(), 1);
        }
        else if (movieGenreSubgenreChoice == 2)
        {
            // recommend based on that movie's starringActor
            movieRecommendationInterface.generateRecommendations(currMovie.getStarringActor(), 2);
        }
        else if (movieGenreSubgenreChoice == 3)
        {
            // recommend based on that movie's director
            movieRecommendationInterface.generateRecommendations(currMovie.getDirector(), 3);
        }



    }




    // recommend based on genre
    else if (option == 2)
    {
        genreName = iohandler.handleGenreRecommendationOption(movieRecommendationInterface);
        
        // generate recommendations based on genre
        movieRecommendationInterface.generateRecommendations(genreName, 1);
        

        
    }
    //recommend based on actor
    else if (option == 3)
    {
        actorName = iohandler.handleActorRecommendationOption(movieRecommendationInterface);
       
       // generate recommendations based on actor
       movieRecommendationInterface.generateRecommendations(actorName, 2);
       
        
    }
    // recommend based on director
    else if (option == 4)
    {
        directorName = iohandler.handleDirectorRecommendationOption(movieRecommendationInterface);
        
        
        // generate recommendations based on director
        movieRecommendationInterface.generateRecommendations(directorName, 3);
    }

    // print recommended movie subset
    iohandler.printRecommendedMoviesHeader();
    movieRecommendationInterface.PrintRecomendedMovies();






    // User is then given the option to sort the recommended movies by
    // 1. name
    // 2. release year
    // 3. popularity
    // 4. rating

    int sortOption = iohandler.handleSortOptions();
    if (sortOption == -1)
    {
        iohandler.printEndMessage();
    }
    else if (sortOption == 1)
    {
        iohandler.printSortOptionHeader(sortOption);
        // call sort by name function on movieRecommendationInterface


        // call print recommended list function on movieRecommendationInterface
    }
    else if (sortOption == 2)
    {
        iohandler.printSortOptionHeader(sortOption);
        // call sort by release date function on movieRecommendationInterface
        
        // call print recommended list function on movieRecommendationInterface
    }
    else if (sortOption == 3)
    {
        iohandler.printSortOptionHeader(sortOption);
        // call sort by popularity function on movieRecommendationInterface
        
        // call print recommended list function on movieRecommendationInterface
    }
    else if (sortOption == 4)
    {
        iohandler.printSortOptionHeader(sortOption);
        // call sort by rating function on movieRecommendationInterface
        
        // call print recommended list function on movieRecommendationInterface
    }

    return 0;
}