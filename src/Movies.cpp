#include "../include/Movies.h"
#include "../include/DatasetAccessor.h"
#include "../include/Movie.h"

Movies::Movies()
{
    DatasetAccessor movieDataset;
    allMovies = movieDataset.generateMoviesVector();
    std::vector<Movie> recommendedMovies;
}



void Movies::SortRecommendedMoviesbyName(){
    std::vector<std::string> name;
    std::vector<int> index;
    for (int i=0;i<recommendedMovies.size();i++){
        name.push_back(recommendedMovies[i].getName());
    }

    bool mycomp(string a, string b){
        return a<b;
    }

    std::sort(name.begin(),name.end(), mycomp);

    for (int i=0; i<name.size(); i++){
        for (int j=0; j<recommendedMovies.size(); j++){
            if (recommendedMovies[j].getName()==name[i]){
                index.push_back(j);
            }
        }
    }
    
    std::vector<Movie> sort_Movies;
    for (int i=0; i<name.size();i++){
        sort_Movies.push_back(recommendedMovies[index[i]]);
    }

    this->recommendedMovies = sort_Movies;
}

void Movies::SortRecommendedMoviesbyRelease(){
    std::vector<int> release;
    std::vector<int> index;
    for (int i=0;i<recommendedMovies.size();i++){
        release.push_back(recommendedMovies[i].getReleaseYear());
    }
    
    bool mycomp(int a, int b){
        return a<b;
    }

    std::sort(release.begin(),release.end(), mycomp);
   
    for (int i=0; i<release.size(); i++){
        for (int j=0; j<recommendedMovies.size(); j++){
            if (recommendedMovies[j].getReleaseYear()==release[i]){
                index.push_back(j);
            }
        }
    }
    
    std::vector<Movie> sort_Movies ;
    for (int i=0; i<release.size();i++){
        sort_Movies.push_back(recommendedMovies[index[i]]);
    }

    this->recommendedMovies = sort_Movies;
}

 void Movies::SortRecommendedMoviesbyPopularity(){
    std::vector<int> vote;
    std::vector<int> index;
    for (int i=0;i<recommendedMovies.size();i++){
        vote.push_back(recommendedMovies[i].getTotalVotes());
    }

    bool mycomp(int a, int b){
        return a<b;
    }

    std::sort(vote.begin(),vote.end() mycomp);

    for (int i=0; i<vote.size(); i++){
        for (int j=0; j<recommendedMovies.size(); j++){
            if (recommendedMovies[j].getTotalVotes()==vote[i]){
                index.push_back(j);
            }
        }
    }
    
    std::vector<Movie> sort_Movies ;
    for (int i=0; i<vote.size();i++){
        sort_Movies.push_back(recommendedMovies[index[i]]);
    }

    this->recommendedMovies = sort_Movies;
}


