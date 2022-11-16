#include "../include/InputOutputHandler.h"


int InputOutputHandler::handleIntroOptions()
{
    cout << "Welcome to the Movie Recommender!\n";
    cout << "Please enter on what basis you would like to be recommended a movie (1-4):\n";
    cout << "1. Name\n";
    cout << "2. Genre\n";
    cout << "3. Starring actor\n";
    cout << "4. Director\n";
    int option;
    cin >> option;
    // validate input
    while(1)
    {
        if(cin.fail())
        {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(),'\n');
            cout << "Please enter a valid option" << endl;
            cin >> option;
        }
        if(!cin.fail())
        {
            if (option > 0 && option < 5)
            {
                break;
            }
            else
            {
                cout << "Please enter a valid option" << endl;
                cin >> option;
            }
        }
    }
}


string InputOutputHandler::handleNameRecommendationOption(Movies& movieRecommendationInterface)
{
    // returns the name the user chose for recommendation
}
string InputOutputHandler::handleGenreRecommendationOption(Movies& movieRecommendationInterface)
{
    // displays genres available for selection:
    // Drama, Adventure, Action, Comedy, Horror, Biography, Crime, Western, Fantasy, Animation, Thriller, Romance, Mystery, 
    // Sci-Fi, Sport, Musical

    // validate if user entered a genre from the list

     // returns the genre the user chose for recommendation

}
string InputOutputHandler::handleActorRecommendationOption(Movies& movieRecommendationInterface)
{
    // returns the actor the user chose for recommendation
}
string InputOutputHandler::handleDirectorRecommendationOption(Movies& movieRecommendationInterface)
{
    // returns the director the user chose for recommendation
}