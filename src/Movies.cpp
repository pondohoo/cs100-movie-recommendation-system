#include "../include/Movies.h"
#include "../include/DatasetAccessor.h"
#include "../include/Movie.h"

Movies::Movies()
{
    DatasetAccessor movieDataset;
    allMovies = movieDataset.generateMoviesVector();
}

Movies::SortRecommendedMoviesbyName(std::vector<Movie> MoviesToReturn){
    std::vector<std::string> names;
    for (int i=0;i<MoviesToReturn.size();i++){
        names.push_back(MoviesToReturn[i].getName());
    }
    std::vector<std::string> sort_names=std::sort(names.begin(),names.end());

    return sort_names;

}

Movies::SortRecommendedMoviesbyRelease(std::vector<Movie> MoviesToReturn){
    std::vector<int> releases;
    std::vector<std::string> names;
    for (int i=0;i<MoviesToReturn.size();i++){
        releases.push_back(MoviesToReturn[i].getReleaseYear());
        names.push_back(MoviesToReturn[i].getName());
    }
    std::vector<std::string> sort_releases=std::sort(releases.begin(),releases.end());


    return sort_releases;

}

Movies::SortRecommendedMoviesbyPopularity(std::vector<Movie> MoviesToReturn){
    std::vector<int> vote;
    std::vector<std::string> names;
    for (int i=0;i<MoviesToReturn.size();i++){
        vote.push_back(MoviesToReturn[i].getTotalVotes());
        names.push_back(MoviesToReturn[i].getName());
    }
    std::vector<std::string> sort_releases=std::sort(releases.begin(),releases.end());


    return sort_releases;
}


Movies::SortRecommendedMoviebyRating(std::vector<Movie> MoviesToReturn){
    std::vector<int> ratings;
    std::vector<std::string> names;
    for (int i=0;i<MoviesToReturn.size();i++){
        ratings.push_back(MoviesToReturn[i].getRating());
        names.push_back(MoviesToReturn[i].getName());
}