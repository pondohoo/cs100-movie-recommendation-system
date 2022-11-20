#include "../include/Movies.h"
#include "../include/InputOutputHandler.h"
#include <cassert>
#include <iostream>





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
                // handleNameRecommendationOption is not implemented yet
                assert(0==1);

                movieName = iohandler.handleNameRecommendationOption(movieRecommendationInterface);
                // if the user enters a name, ask if they would like a recommendation based on that movie's:
                // genre, actor, director

                // get the movie object from the list
                Movie currMovie = movieRecommendationInterface.getMovie(movieName);

                // validate that the movie was found
                if (currMovie.getName() == "N/A")
                {
                    assert(currMovie.getName() != "N/A");
                }
                // check on what basis the user would like to see a recommendation for the specific movie
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
        
        //genreName = iohandler.handleGenreRecommendationOption(movieRecommendationInterface);
        
        // generate recommendations based on genre
        //movieRecommendationInterface.generateRecommendations(genreName, 1);
        

        
    }


    //recommend based on actor
    else if (option == 3)
    {
        //actorName = iohandler.handleActorRecommendationOption(movieRecommendationInterface);
       
       // generate recommendations based on actor
       //movieRecommendationInterface.generateRecommendations(actorName, 2);
       
        
    }
    // recommend based on director
    else if (option == 4)
    {
        //directorName = iohandler.handleDirectorRecommendationOption(movieRecommendationInterface);
        
        
        // generate recommendations based on director
        //movieRecommendationInterface.generateRecommendations(directorName, 3);
    }
    // print recommended movie subset
    iohandler.printRecommendedMoviesHeader();
    movieRecommendationInterface.PrintRecomendedMovies();






    // User is then given the option to sort the list
    // 1. Yes
    // 2. No

    // If yes, on what basis
    // 1. name
    // 2. release year
    // 3. popularity
    // 4. rating

    int sortOption = iohandler.handleSortOptions();
    if (sortOption == -1)
    {
        // user does not want the list sorted
        iohandler.printEndMessage();
    }
    else if (sortOption == 1)
    {
        // sort the list by name
        iohandler.printSortOptionHeader(sortOption);
        //movieRecommendationInterface.SortRecommendedMoviesbyName();

        // call print recommended list function on movieRecommendationInterface
        movieRecommendationInterface.PrintRecomendedMovies();
    }
    else if (sortOption == 2)
    {
        // sort the list by release date
        iohandler.printSortOptionHeader(sortOption);
        //movieRecommendationInterface.SortRecommendedMoviesbyRelease();


        // call print recommended list function on movieRecommendationInterface
        movieRecommendationInterface.PrintRecomendedMovies();
    }
    else if (sortOption == 3)
    {
        // sort the list by popularity
        iohandler.printSortOptionHeader(sortOption);
        //movieRecommendationInterface.SortRecommendedMoviesbyPopularity();

        
        // call print recommended list function on movieRecommendationInterface
        movieRecommendationInterface.PrintRecomendedMovies();
    }
    else if (sortOption == 4)
    {
        // sort the list by rating
        iohandler.printSortOptionHeader(sortOption);
        //movieRecommendationInterface.SortRecommendedMoviesbyRating();
        
        // call print recommended list function on movieRecommendationInterface
        movieRecommendationInterface.PrintRecomendedMovies();
    }
    iohandler.printEndMessage();

    return 0;
}