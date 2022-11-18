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
    for (int i=0;i<allMovies.size();i++){
        name.push_back(allMovies[i].getName());
    }

    bool mycomp(string a, string b){
        return a<b;
    }

    std::sort(name.begin(),name.end(), mycomp);

    for (int i=0; i<name.size(); i++){
        for (int j=0; j<allMovies.size(); j++){
            if (allMovies[j].getName()==name[i]){
                index.push_back(j);
            }
        }
    }
    
    std::vector<Movie> recommendedMovies ;
    for (int i=0; i<name.size();i++){
        recommendedMovies.push_back(allMovies[index[i]]);
    }

    this->recommendedMovies = recommendedMovies;
}

void Movies::SortRecommendedMoviesbyRelease(){
    std::vector<int> release;
    std::vector<int> index;
    for (int i=0;i<allMovies.size();i++){
        release.push_back(allMovies[i].getReleaseYear());
    }
    
    bool mycomp(int a, int b){
        return a<b;
    }

    std::sort(release.begin(),release.end(), mycomp);
   
    for (int i=0; i<release.size(); i++){
        for (int j=0; j<allMovies.size(); j++){
            if (allMovies[j].getReleaseYear()==release[i]){
                index.push_back(j);
            }
        }
    }
    
    std::vector<Movie> recommendedMovies ;
    for (int i=0; i<release.size();i++){
        recommendedMovies.push_back(allMovies[index[i]]);
    }

    this->recommendedMovies = recommendedMovies;
}

 void Movies::SortRecommendedMoviesbyPopularity(){
    std::vector<int> vote;
    std::vector<int> index;
    for (int i=0;i<allMovies.size();i++){
        vote.push_back(allMovies[i].getTotalVotes());
    }

    bool mycomp(int a, int b){
        return a<b;
    }

    std::sort(vote.begin(),vote.end() mycomp);

    for (int i=0; i<vote.size(); i++){
        for (int j=0; j<allMovies.size(); j++){
            if (allMovies[j].getTotalVotes()==vote[i]){
                index.push_back(j);
            }
        }
    }
    
    std::vector<Movie> recommendedMovies ;
    for (int i=0; i<vote.size();i++){
        recommendedMovies.push_back(allMovies[index[i]]);
    }

    this->recommendedMovies = recommendedMovies;
}


