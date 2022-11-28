#include "../include/Movies.h"
#include "../include/DatasetAccessor.h"
#include "../include/Movie.h"
#include <iostream>

#include <algorithm>


Movies::Movies()
{
    DatasetAccessor movieDataset;
    allMovies = movieDataset.generateMoviesVector();
}


int Movies::PrintRecommendedMovies(int pageNumber){
    int movieCounter = 0;
    bool atLeastOneMovie = false;
    // pageNumber == 0-> items 0->10
    // pageNumber == 1-> items 10->20
    // pageNumber == 5-> items 50->60
    cout << endl;
    int i = pageNumber*10;
    int endi = i+10;
    for(int i = pageNumber*10;i<endi&&i<this->recommendedMovies.size();i++) {
        ++movieCounter;
        atLeastOneMovie = true;
        cout<<this->recommendedMovies.at(i).getName()<<'\n';
    }
    if (!atLeastOneMovie)
    {
        cout << "No movies found!" << endl;
    }
    cout << endl;
    return movieCounter;
}



// utilize the heap sort algorithm to sort the recommendedMovies vector by rating from greatest to least
void Movies::SortRecommendedMoviesbyRating() {
    for (int i = this->recommendedMovies.size() / 2 - 1; i >= 0; i--) {
        heapify_Rating(this->recommendedMovies.size(), i);
    }

    // One by one extract an element from heap
    for (int i = this->recommendedMovies.size() - 1; i >= 0; i--) {
        // Move current root to end
        swap(this->recommendedMovies[0], this->recommendedMovies[i]);
 
        // call max heapify on the reduced heap
        heapify_Rating(i, 0);
    }
}

// helper function that is called by ratingsort function
// swaps the least to the top of the vector with heap property

void Movies::heapify_Rating(int n, int i) {
    int smallest = i; // Initialize smallest as root
    int l = 2 * i + 1; // left = 2*i + 1
    int r = 2 * i + 2; // right = 2*i + 2
 
    // If left child is smaller than root
    if (l < n && this->recommendedMovies.at(l).getRating() < this->recommendedMovies.at(smallest).getRating())
        smallest = l;
 
    // If right child is smaller than smallest so far
    if (r < n && this->recommendedMovies.at(r).getRating() < this->recommendedMovies.at(smallest).getRating())
        smallest = r;
 
    // If smallest is not root
    if (smallest != i) {
        swap(this->recommendedMovies[i], this->recommendedMovies[smallest]);
 
        // Recursively heapify the affected sub-tree
        heapify_Rating(n, smallest);
    }
}

// functions only used in unit tests to 
//      -get a movie from allMovies vector
//      -push directly to the reccommendedMovies vector,
//      -get a movie from reccommendedMovies
//      -get size of recommendedMovies vector

void Movies::testPushBackforTestingOnly(Movie reccMovie) {
    recommendedMovies.push_back(reccMovie);
}

Movie Movies::getallMoviesmovieForTestingOnly(int i) {
    return allMovies.at(i);
}

Movie Movies::getMovieTestingOnly(int i) {
    return recommendedMovies.at(i);
}

int Movies::sizeofRecommendedForTestingOnly() {
    return recommendedMovies.size();
}

Movie Movies::getMovie(string movieName)
{
    // this is just until function is implemented, so it will fail if it is called
    // assert(0==1);

    // search the allMovies for the movie name and return the object associated with that movie name
    for (int i = 0; i < allMovies.size(); ++i) {
        if (allMovies.at(i).getName() == movieName) {
            return allMovies.at(i);
        }
    }

    // if it's not found maybe you could create and return a Movie object with all
    // string data members as "N/A" and int and double data members as 0 so we can validate it
    // in main

    string name = "N/A";
    string genre = "N/A";
    string director = "N/A";
    string star = "N/A";
    double rating = 0.0;
    int votes = 0;
    int year = 0;

    Movie nullMovie(name, genre, director, star, rating, votes, year);

    return nullMovie;
}

bool Movies::doesActorExist(string actorName)
{
    // this is here to make function fail if it is called before it is implemented 
    assert(0==1);
    // iterate through allMovies until a Movie object with the actor actorName is found  
    // once it is found, immediately return true 
    // if it iterates through all of allMovies and it is still not found, return false
}
bool Movies::doesDirectorExist(string directorName)
{
    // this is here to make function fail if it is called before it is implemented 
    assert(0==1);
    // iterate through allMovies until a Movie object with the director directorName is found  
    // once it is found, immediately return true 
    // if it iterates through all of allMovies and it is still not found, return false
}

void Movies::generateRecommendations(string basisName, int basis)
{
    // recommend by genre
    if (basis == 1)
    {
        // compare genre (stored in basisName) with genre from every movie in allMovies
        // if the genre (stored in basisName) is the current movie genre, add the movie to recommendedMovies
        generateRecommendationsGenre(basisName);
    
    }
    // recommend by actor
    else if (basis == 2)
    {
        // compare actor (stored in basisName) with leadingActor from every movie in allMovies
        // if the actor (sotred in basisName) is the current movie leadingActor, add the movie to recommendedMovies
        generateRecommendationsActor(basisName);
    
    
    
    }
    // recommend by director
    else if (basis == 3)
    {
        // compare director (stored in basisName) with director from every movie in allMovies
        // if the director (stored in basisName) is the current movie director, add the movie to recommendedMovies
        generateRecommendationsDirector(basisName);

    
    
    }
}

void Movies::generateRecommendationsGenre(string genreName)
{
    // search through allMovies for all Movie objects that have the genre given by the parameter genreName
    // if there is a Movie object with that genre, add it to recommendedMovies 

    for (int i = 0; i < allMovies.size(); ++i) {
        if (allMovies.at(i).getGenre() == genreName) {
            recommendedMovies.push_back(allMovies.at(i));
        }
    }
}


void Movies::generateRecommendationsActor(string actorName)
{
    // search through allMovies for all Movie objects that have the actor given by the parameter actorName
    // if there is a Movie object with that actor, add it to recommendedMovies 
    for (int i = 0; i < allMovies.size(); ++i) {
        if (allMovies.at(i).getStarringActor() == actorName) {
            recommendedMovies.push_back(allMovies.at(i));
        }
    }
}


void Movies::generateRecommendationsDirector(string directorName)
{
    // search through allMovies for all Movie objects that have the director name given by the parameter directorName
    // if there is a Movie object with that director, add it to recommendedMovies 

    for (int i = 0; i < allMovies.size(); ++i) {
        if (allMovies.at(i).getDirector() == directorName) {
            recommendedMovies.push_back(allMovies.at(i));
        }
    }
}
