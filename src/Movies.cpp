#include "../include/Movies.h"
#include "DatasetAccessor.h"

Movies::Movies()
{
    DatasetAccessor movieDataset;
    allMovies = movieDataset.generateMoviesVector();
}