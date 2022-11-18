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




void InputOutputHandler::printRecommendedMoviesHeader()
{
    cout << "Here is a list of movies you might like:" << endl;
}
void InputOutputHandler::printEndMessage()
{
    cout << "Thank you for using the Movie Recommender!" << endl;
}
void InputOutputHandler::printSortOptionHeader(int option)
{
    if (option == 1)
    {
        // sorted by name message
    }
    if (option == 2)
    {
        // sorted by release year message
    }
    if (option == 3)
    {
        // sorted by popularity message
    }
    if (option == 4)
    {
        // sorted by rating message
    }
}





int InputOutputHandler::handleSortOptions()
{
    cout << "Would you like to sort this list?\n";
    cout << "1. Yes\n";
    cout << "2. No\n";
    int initialOption;
    cin >> initialOption;
    // validate input
    while(1)
    {
        if(cin.fail())
        {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(),'\n');
            cout << "Please enter a valid option" << endl;
            cin >> initialOption;
        }
        if(!cin.fail())
        {
            if (initialOption > 0 && initialOption < 3)
            {
                break;
            }
            else
            {
                cout << "Please enter a valid option" << endl;
                cin >> initialOption;
            }
        }
    }
    if (initialOption == 2)
    {
        return -1; // proceed to end program in main
    }
    if (initialOption == 1)
    {
        cout << "Please enter on what basis you would like the list sorted (1-4):\n";
        cout << "1. Alphabetical order\n";
        cout << "2. Release year\n";
        cout << "3. Popularity\n";
        cout << "4. Rating\n";
        int sortingChoiceOption;
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
}