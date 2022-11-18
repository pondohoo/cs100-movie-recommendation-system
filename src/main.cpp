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
    }
    else if (option == 2)
    {
        genreName = iohandler.handleGenreRecommendationOption(movieRecommendationInterface);
        
        
        // generate recommendations based on genre
    }
    else if (option == 3)
    {
        actorName = iohandler.handleActorRecommendationOption(movieRecommendationInterface);
       
       
        // generate recommendations based on actor
    }
    else if (option == 4)
    {
        directorName = iohandler.handleDirectorRecommendationOption(movieRecommendationInterface);
        
        
        // generate recommendations based on director
    }

    return 0;
}