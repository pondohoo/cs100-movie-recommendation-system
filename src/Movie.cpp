#include "../include/Movie.h"

Movie::Movie(string movieName, vector<string> genreList, string directorName, double ratings, string date)
    : name(movieName),
      genres(genreList),
      director(directorName),
      rating(ratings),
      releaseDate(date) { }

string Movie::getName() { return name; }

string Movie::getDirector() { return director; }

string Movie::getReleaseDate() { return releaseDate; }

double Movie::getRating() { return rating; }

vector<string> Movie::getGenres() { return genres; }

void Movie::setName(string name) { this->name = name; }

void Movie::setDirector(string directorName) { this->director = directorName; }

void Movie::setRating(double rating) { this->rating = rating; }

void Movie::setReleaseDate(string releaseDate) { this->releaseDate = releaseDate; }

void Movie::setGenres(vector<string> genreList) { this->genres = genreList; }
