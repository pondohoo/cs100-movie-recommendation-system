#ifndef DATASETACCESSOR_H
#define DATASETACCESSOR_H

#include "Movie.h"
#include <vector>

class DatasetAccessor {
    public:
        
        // parses through movies.csv and returns a vector<Movie> of all movies in the dataset
        vector<Movie> generateMoviesVector();

};

#endif