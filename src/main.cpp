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
    if (option == 1)
    {
        movieName = iohandler.handleNameRecommendationOption(movieRecommendationInterface);
        
        
        // generate recommendations based on name
        movieRecommendationInterface.generateRecommendations(movieName, option);


    }
    else if (option == 2)
    {
        genreName = iohandler.handleGenreRecommendationOption(movieRecommendationInterface);
        
        // generate recommendations based on genre
        movieRecommendationInterface.generateRecommendations(genreName, option);
        

        
    }
    else if (option == 3)
    {
        actorName = iohandler.handleActorRecommendationOption(movieRecommendationInterface);
       
       // generate recommendations based on actor
       movieRecommendationInterface.generateRecommendations(actorName, option);
       
        
    }
    else if (option == 4)
    {
        directorName = iohandler.handleDirectorRecommendationOption(movieRecommendationInterface);
        
        
        // generate recommendations based on director
        movieRecommendationInterface.generateRecommendations(directorName, option);
    }

    // print recommended movie subset
    iohandler.printRecommendedMoviesHeader();
    movieRecommendationInterface.PrintRecomendedMovies();


    // User is given the option to sort the recommended movies by
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
        // sort list by name
        // print list
    }
    else if (sortOption == 2)
    {
        iohandler.printSortOptionHeader(sortOption);
        // sort list by release year
        // print list
    }
    else if (sortOption == 3)
    {
        iohandler.printSortOptionHeader(sortOption);
        // sort list by popularity
        // print list
    }
    else if (sortOption == 4)
    {
        iohandler.printSortOptionHeader(sortOption);
        // sort list by rating
        // print list
    }




    return 0;
}