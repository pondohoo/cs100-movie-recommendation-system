#include "../include/Movies.h"
#include "../include/DatasetAccessor.h"

Movies::Movies()
{
    DatasetAccessor movieDataset;
    allMovies = movieDataset.generateMoviesVector();
}