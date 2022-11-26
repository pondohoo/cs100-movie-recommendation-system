#include "../include/InputOutputHandler.h"
#include <limits>

int InputOutputHandler::handleIntroOptions()
{
    cout << "Welcome to the Movie Recommender!\n";
    cout << "Please enter on what basis you would like to be recommended a movie (1-4):\n";
    cout << "1. Name\n";
    cout << "2. Genre\n";
    cout << "3. Starring actor\n";
    cout << "4. Director\n";
    int option = 1;
    cin >> option;
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
    return option;
    
}


string InputOutputHandler::handleNameRecommendationOption(Movies& movieRecommendationInterface)
{
    // this is just until function is implemented, so it will fail if it is called
    assert(0==1);
    // returns the name the user chose for recommendation
}
string InputOutputHandler::handleGenreRecommendationOption(Movies& movieRecommendationInterface)
{
    // this is just until function is implemented, so it will fail if it is called
    assert(0==1);
    // displays genres available for selection:
    // Drama, Adventure, Action, Comedy, Horror, Biography, Crime, Western, Fantasy, Animation, Thriller, Romance, Mystery, 
    // Sci-Fi, Sport, Musical

    // validate if user entered a genre from the list

     // returns the genre the user chose for recommendation

}
string InputOutputHandler::handleActorRecommendationOption(Movies& movieRecommendationInterface)
{
    // this is just until function is implemented, so it will fail if it is called
    assert(0==1);
    // returns the actor the user chose for recommendation
}
string InputOutputHandler::handleDirectorRecommendationOption(Movies& movieRecommendationInterface)
{
    // this is just until function is implemented, so it will fail if it is called
    assert(0==1);
    // returns the director the user chose for recommendation
}




void InputOutputHandler::printRecommendedMoviesHeader()
{
    cout << "Here is a list of movies you might like:" << endl;
}




int InputOutputHandler::handleEndMessage()
{
    cout << "Thank you for using the Movie Recommender!" << endl;
    cout << "Would you like another recommendation?" << endl;
    cout << "1. Yes" << endl;
    cout << "2. No" << endl;

    int decision = 0;
    cin >> decision;
    while(1)
        {
            if(cin.fail())
            {
                cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(),'\n');
                cout << "Please enter a valid option" << endl;
                cin >> decision;
            }
            if(!cin.fail())
            {
                if (decision == 1 || decision == 2)
                {
                    break;
                }
                else
                {
                    cout << "Please enter a valid option" << endl;
                    cin >> decision;
                }
            }
        }
        cout << endl << endl << endl;
    return decision;
}

int InputOutputHandler::handleFinalDecision()
{
    cout << "1. View next page of recommendations" << endl;
    cout << "2. Sort the list" << endl;
    cout << "3. Quit" << endl;
    int decision = 3;
    cin >> decision;
    while(1)
        {
            if(cin.fail())
            {
                cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(),'\n');
                cout << "Please enter a valid option" << endl;
                cin >> decision;
            }
            if(!cin.fail())
            {
                if (decision > 0 && decision < 4)
                {
                    break;
                }
                else
                {
                    cout << "Please enter a valid option" << endl;
                    cin >> decision;
                }
            }
        }
        cout << endl;
        return decision;
}

void InputOutputHandler::printSortOptionHeader(int option)
{
    cout << endl;
    if (option == 1)
    {
        // sorted by name message
        cout << "Here are the recommmended movies sorted by name:\n";
    }
    if (option == 2)
    {
        // sorted by release year message
        cout << "Here are the recommended movies sorted by release year:\n";
    }
    if (option == 3)
    {
        // sorted by popularity message
        cout << "Here are the recommended movies sorted by popularity:\n";
    }
    if (option == 4)
    {
        // sorted by rating message
        cout << "Here are the recommended movies sorted by rating:\n";
    }
}

int InputOutputHandler::handleSpecificMovieOptions()
{
    cout << "Would you like a recommendation based on that movie's:\n";
    cout << "1. Genre\n";
    cout << "2. Starring actor\n";
    cout << "3. Director\n";
    int option;
    cin >> option;
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
            if (option > 0 && option < 4)
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
    cout << endl << endl;
    return option;
}





int InputOutputHandler::handleSortOptions()
{
    cout << "Please enter on what basis you would like the list sorted (1-4):\n";
    cout << "1. Alphabetical order\n";
    cout << "2. Release year\n";
    cout << "3. Popularity\n";
    cout << "4. Rating\n";
    int sortingChoiceOption = 1;
    cin >> sortingChoiceOption;
    while(1)
    {
        if(cin.fail())
        {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(),'\n');
            cout << "Please enter a valid option" << endl;
            cin >> sortingChoiceOption;
        }
        if(!cin.fail())
        {
            if (sortingChoiceOption > 0 && sortingChoiceOption < 5)
            {
                break;
            }
            else
            {
                cout << "Please enter a valid option" << endl;
                cin >> sortingChoiceOption;
            }
        }
    }
    return sortingChoiceOption;
}