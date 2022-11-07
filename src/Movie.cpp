#include "Movie.h"

Movie::Movie(string name, string genre, string director, string starringActor, double rating, double totalVotes, int releaseYear)
{
    this->name=name;
    this->genre=genre;
    this->director=director;
    this->starringActor=starringActor;
    this->rating=rating;
    this->totalVotes=totalVotes;
    this->releaseYear=releaseYear;
}
