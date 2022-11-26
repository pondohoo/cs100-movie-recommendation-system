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
    // returns the name the user chose for recommendation
    cout << "Enter a movie for a similar recommendation" << endl;
    string movieName = "";
    cin >> movieName;
    cout << endl;
    while(1)
    {
        if(cin.fail())
        {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(),'\n');
            cout << "Movie not found!" << endl;
            cout << "Enter a movie for a similar recommendation" << endl;
            cin >> movieName;
            cout << endl;
        }
        if(!cin.fail())
        {
            Movie currMovie = movieRecommendationInterface.getMovie(movieName);
            if (currMovie.getName() != "N/A")
            {
                break;
            }
            cout << "Movie not found!" << endl;
            cout << "Enter a movie for a similar recommendation" << endl;
            cin >> movieName;
            cout << endl;
        }
    }
    return movieName;

}


string InputOutputHandler::handleGenreRecommendationOption(Movies& movieRecommendationInterface)
{
    // displays genres available for selection:
    vector<string> genres;
    genres.push_back("Drama"); 
    genres.push_back("Adventure");
    genres.push_back("Action");
    genres.push_back("Comedy");
    genres.push_back("Horror");
    genres.push_back("Biography");
    genres.push_back("Crime");
    genres.push_back("Western");
    genres.push_back("Fantasy");
    genres.push_back("Animation"); 
    genres.push_back("Thriller");
    genres.push_back("Romance");
    genres.push_back("Mystery");
    genres.push_back("Sci-Fi");
    genres.push_back("Sport");
    genres.push_back("Musical");

    cout << "List of available genres:" << endl;
    for (unsigned int i = 0; i < genres.size() - 1; ++i)
    {
        cout << genres.at(i) << ", ";
        if (i > 0 && i % 5==0)
        {
            cout << endl;
        }
    }
    cout << genres.at(genres.size()-1) << endl;
    cout << endl;
    cout << "Please enter a genre from the list" << endl;
    string userGenre = "";
    cin >> userGenre;
    // validate if user entered a genre from the list
    while(1)
    {
        if(cin.fail())
        {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(),'\n');
            cout << "Please enter a valid option" << endl;
            cin >> userGenre;
        }
        if(!cin.fail())
        {
            // iterate through genre list and check if userGenre is in list
            for (unsigned int i = 0; i < genres.size(); ++i)
            {
                if (userGenre == genres.at(i))
                {
                    cout << endl << endl;
                    return userGenre;
                }
            }
            cout << "Please enter a valid option" << endl;
            cin >> userGenre;
        }
    }
     // returns the genre the user chose for recommendation
     return userGenre;

}
string InputOutputHandler::handleActorRecommendationOption(Movies& movieRecommendationInterface)
{
    // returns the actor the user chose for recommendation
    cout << "Enter an actor (full name) to get a recommendation on movies they starred in" << endl;
    string actorName;
    cin >> actorName;
    cout << endl;
    while(1)
    {
        if(cin.fail())
        {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(),'\n');
            cout << "Actor not found!" << endl;
            cout << "Enter an actor (full name) to get a recommendation on movies they starred in" << endl;
            cin >> actorName;
            cout << endl;
            
        }
        if(!cin.fail())
        {
            if (movieRecommendationInterface.doesActorExist(actorName) != "N/A")
            {
                break;
            }
            cout << "Actor not found!" << endl;
            cout << "Enter an actor (full name) to get a recommendation on movies they starred in" << endl;
            cin >> actorName;
            cout << endl;
            
        }
    }
    return actorName;
}

string InputOutputHandler::handleDirectorRecommendationOption(Movies& movieRecommendationInterface)
{
    // returns the director the user chose for recommendation
    cout << "Enter a director (full name) to get a recommendation on movies they directed" << endl;
    string directorName;
    cin >> directorName;
    cout << endl;
    while(1)
    {
        if(cin.fail())
        {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(),'\n');
            cout << "Director not found!" << endl;
            cout << "Enter a director (full name) to get a recommendation on movies they directed" << endl;
            cin >> directorName;
            cout << endl;
            
        }
        if(!cin.fail())
        {
            if (movieRecommendationInterface.doesDirectorExist(directorName) != "N/A")
            {
                break;
            }
            cout << "Direcotr not found!" << endl;
            cout << "Enter a director (full name) to get a recommendation on movies they directed" << endl;
            cin >> directorName;
            cout << endl;
            
        }
    }
    return directorName;
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