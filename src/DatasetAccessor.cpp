#include "DatasetAccessor.h"

#include<iostream>
#include<string>
#include<fstream>
#include<sstream>

using namespace std;

vector<Movie> DatasetAccessor::generateMoviesVector()
{
    ifstream inputFile;

    // test if this actually opens
    inputFile.open("./lib/movies.csv");
}