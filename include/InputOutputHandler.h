#ifndef INPUTOUTPUTHANDLER_H
#define INPUTOUTPUTHANDLER_H

#include <iostream>
#include <string>
#include "Movies.h"



class InputOutputHandler {
    public:
        // handles invalid input and returns valid user input
        int handleIntroOptions();
        int handleSortOptions();

        void printRecommendedMoviesHeader();
        void printEndMessage();
        void printSortOptionHeader(int option);

        string handleNameRecommendationOption(Movies& movieRecommendationInterface);
        string handleGenreRecommendationOption(Movies& movieRecommendationInterface);
        string handleActorRecommendationOption(Movies& movieRecommendationInterface);
        string handleDirectorRecommendationOption(Movies& movieRecommendationInterface);
        



};

#endif