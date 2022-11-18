#include "../include/Movies.h"
#include "../include/DatasetAccessor.h"
#include "../include/Movie.h"

Movies::Movies()
{
    DatasetAccessor movieDataset;
    allMovies = movieDataset.generateMoviesVector();
}



void Movies::SortRecommendedMoviesbyName(std::vector<Movie> MoviesToReturn){
    std::vector<std::string> name;
    std::vector<int> index;
    for (int i=0;i<MoviesToReturn.size();i++){
        name.push_back(MoviesToReturn[i].getName());
    }

    bool mycomp(string a, string b){
        return a<b;
    }

    std::sort(name.begin(),name.end(), mycomp);

    for (int i=0; i<name.size(); i++){
        for (int j=0; j<MoviesToReturn.size(); j++){
            if (MoviesToReturn[j].getName()==name[i]){
                index.push_back(j);
            }
        }
    }
    
    std::vector<Movie> recommendedMovies ;
    for (int i=0; i<name.size();i++){
        recommendedMovies.push_back(MoviesToReturn[index[i]]);
    }

    this->recommendedMovies = recommendedMovies;
}

void Movies::SortRecommendedMoviesbyRelease(std::vector<Movie> MoviesToReturn){
    std::vector<int> release;
    std::vector<int> index;
    for (int i=0;i<MoviesToReturn.size();i++){
        release.push_back(MoviesToReturn[i].getReleaseYear());
    }
    
    bool mycomp(int a, int b){
        return a<b;
    }

    std::sort(release.begin(),release.end() mycomp);
   
    for (int i=0; i<release.size(); i++){
        for (int j=0; j<MoviesToReturn.size(); j++){
            if (MoviesToReturn[j].getReleaseYear()==release[i]){
                index.push_back(j);
            }
        }
    }
    
    std::vector<Movie> recommendedMovies ;
    for (int i=0; i<release.size();i++){
        recommendedMovies.push_back(MoviesToReturn[index[i]]);
    }

    this->recommendedMovies = recommendedMovies;
}

 void Movies::SortRecommendedMoviesbyPopularity(std::vector<Movie> MoviesToReturn){
    std::vector<int> vote;
    std::vector<int> index;
    for (int i=0;i<MoviesToReturn.size();i++){
        vote.push_back(MoviesToReturn[i].getTotalVotes());
    }

    bool mycomp(int a, int b){
        return a<b;
    }

    std::sort(vote.begin(),vote.end() mycomp);

    for (int i=0; i<vote.size(); i++){
        for (int j=0; j<MoviesToReturn.size(); j++){
            if (MoviesToReturn[j].getTotalVotes()==vote[i]){
                index.push_back(j);
            }
        }
    }
    
    std::vector<Movie> recommendedMovies ;
    for (int i=0; i<vote.size();i++){
        recommendedMovies.push_back(MoviesToReturn[index[i]]);
    }

    this->recommendedMovies = recommendedMovies;
}


void Movies::PrintRecomendedMovies(){
    for(int i=0;i<(this->recommendedMovies).size(),i++){
        std::cout<<(this->recommendedMovies)[i]<<'\n';
    }
}


