#include<iostream>
#include<string>
#include<fstream>
#include<sstream>

#include "../include/DatasetAccessor.h"

using namespace std;


vector<Movie> DatasetAccessor::generateMoviesVector()
{
    vector<Movie> MoviesToReturn;
    ifstream inputFile;

    // test if this actually opens
    inputFile.open("./lib/movies.csv");
    assert(inputFile);
    string line = "";
    getline(inputFile, line); // empty header line


    line = "";

    // while there are still rows in the csv file
    while (getline(inputFile, line)) {
        
        string name;
        string genre;
        int year;
        double score;
        int votes;
        string director;
        string star;
        string tempString;

        // take the current row and make a stringstream object out of it
        stringstream inputString(line);

        // store each entry in the row into an individual variable
        getline(inputString, name, ',');
        getline(inputString, genre, ',');
        getline(inputString, tempString, ',');
        // convert string to int when needed
        year = atoi(tempString.c_str());
        getline(inputString, tempString, ',');
        // convert string to double
        score = atof(tempString.c_str());
        getline(inputString, tempString, ',');
        votes = atoi(tempString.c_str());
        getline(inputString, director, ',');
        getline(inputString, star, ',');
        

        // store all of the variables as member variables of a Movie object
        Movie currMovie(name, genre, director, star, score, votes, year);


        // push that movie object into the movie array to return
        MoviesToReturn.push_back(currMovie);

        line = "";
        
    }



    return MoviesToReturn;
}