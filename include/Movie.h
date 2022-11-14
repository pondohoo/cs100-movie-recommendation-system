#ifndef MOVIE_H
#define MOVIE_H

#include <vector>
#include <string>

using namespace std;


class Movie {
    private:
        string name;
        string genre;

        string director;
        string starringActor;
        
        double rating;
        double totalVotes;
        int releaseYear;

    public:
        Movie(string name, string genre, string director, string starringActor, double rating, int totalVotes, int releaseYear);
        string getName();
        string getGenre();
        string getDirector();
        int getReleaseYear();
        string getStarringActor();
        double getRating();
        int getTotalVotes();


};

#endif