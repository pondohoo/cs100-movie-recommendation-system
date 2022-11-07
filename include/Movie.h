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
        string releaseYear;

    public:
        Movie(string name, string genre, string director, string starringActor, double rating, double totalVotes, int releaseYear);
        string getName();
        string getGenre();
        string getDirector();
        string getStarringActor();
        double getRating();
        double getTotalVotes();
        double getReleaseYear();


};

#endif