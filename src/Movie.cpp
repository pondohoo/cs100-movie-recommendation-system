#include "Movie.h"

Movie::Movie(string movieName, string genreName, string directorName, string actor, double ratingValue, double votes, int year)
    : name(movieName),
      genre(genreName),
      director(directorName),
      starringActor(actor),
      rating(ratingValue),
      totalVotes(votes),
      releaseYear(year) { }


string Movie::getName() { return name; }

string Movie::getDirector() { return director; }

string Movie::getStarringActor() { return starringActor; }

int Movie::getReleaseYear() { return releaseYear; }

double Movie::getRating() { return rating; }

double Movie::getTotalVotes() { return totalVotes; }

string Movie::getGenre() { return genre; }


