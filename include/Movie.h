#ifndef MOVIE_H
#define MOVIE_H

#include <vector>
#include <string>

using namespace std;


class Movie {
    private:
        string name;
        vector<string> genres;
        string director;
        double rating;
        string releaseDate;

    public:
        Movie();
        string getName();
        void setName(string );
        vector<string> getGenres();
        void setGenres(vector<string> );
        string getDirector();
        void setDirector(string );
        double getRating();
        void setRating(double );
        string getReleaseDate();
        void setReleaseDate(string );

};

#endif