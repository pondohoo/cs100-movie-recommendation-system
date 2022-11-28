# Movie Recommender

Authors
- [Camille Lacroix](https://github.com/clacr002)
- [Theo Fernandez](https://github.com/pondohoo)
- [Eddie Nguyen](https://github.com/Neguyen-Edy)
- [Andrea Sembrana](https://github.com/andreasembrana19)
 
 
 ## Project description
 
As university's students, we spend most of our time working on projects, assignments or exams. but where there is a time for work there is also a time for relaxing. What's better than movie nights on fridays? With the fatigue it might get difficult to select a movie to watch. No worries! This application will help you chose the best movie to relax to. Our project will consist of recommending a movie using different genre/subgenre listings.

To build our movie recommender, we used C++, a movies csv dataset, and a movie recommendation algorithm. Group members pushed their parts to Github as Pull Requests, and other group members reviewed said pull requests

The input of this application allows users to type in 1 genre, 1 subgenre, and a movie name for a recommendation. It also lets user selects next page options and sorting options for the generated list of recommended movies
Genres include:
* Drama, Adventure, Action, Comedy, Horror, Biography, Crime, Western, Fantasy, Animation, Thriller, Romance, Mystery, Sci-Fi, Sport, and Musical
Subgenres include:
* Director and Starring Actor

Features:
* When the user enters a genre or subgenre, the program will generate a list of movies contain the inputted genre or subgenre
* If the user enters a movie, the program asks the user if they would like a recommendation based on that movie’s genre or subgenres
* The generated recommendation will then be outputted to the user, with the ability to flip through pages of the list of recommendations
* This outputted list can also be sorted based on rating, release date, alphabetical order, or popularity
* The user can choose to get another recommendation or to quit the program


## Class Diagram

<img width="1063" alt="Screen Shot 2022-11-26 at 22 04 27" src="https://user-images.githubusercontent.com/90938120/204363686-cebf6322-de91-4c44-b302-93211a198e22.png">


### Diagram Description
Movies class: 
* The primary interface for performing the operations of the program. 
* Can create recommendations of movies using generateRecommendations() given a vector of Movie objects. 
* Three helper functions generateRecommendationsGenre(), generateRecommendationsActor(), and generateRecommendationsRating() assist are called by generateRecommendations() to assist in the recommendation process. 
* Generates this vector of Movie objects in the constructor Movies() by utilizing the DatasetAccessor class. 
* Has 4 separate functions for sorting the recommended list of movies––SortRecommendedMoviesbyName(), SortRecommendedMoviesbyRelease(), SortRecommendedMoviesbyPopularity(), and SortRecommendedMoviesbyRating(). The latter three use a heap sort algorithm and thus have helper functions heapify_Release(), heapify_Popularity(), and heapify_rating() that assist in the algorithm process. 
* Movies is also capable of printing the generated recommended list using PrintRecommendedMovies() to allow users to see their recommendations. doesActorExist() checks if a parameter actorName exists within the database, and doesDirectorExist() checks if a parameter directorName exists within the database; these two are called in the InputOutput class to validate input. 
* The additional 4 functions, getMovieTestingOnly(), testPushBackforTestingOnly(), getallMoviesmovieForTestingOnly(), and sizeofRecommendedForTestingOnly() are used to give permissions to tests of the Movies functions.

Movie class: 
* Objects of the Movie class store information for each movie parsed from the movie dataset. 
* Information it stores in member variables include: name, genre, director, starring actor, rating, total votes, and release year. 
* Also allows access to each of these through getter functions.

DatasetAccessor class: 
* All of the work for accessing and parsing through the movies.csv dataset file is directed to this class. 
* Through generateMoviesVector(), creates vector allMovies for the Movies class.

InputOutput class: 
* An interface that handles all of the iostream operations for the main function. 
* All functions that start with “handle” use cin to take user input and validate it, and use cout to print out informational headers. 
* All functions that start with “print” solely print out informational headers through cout

## Installation/usage instructions for the application (including dependencies and screenshots)

### How to install
1. Download the latest release of the Movie Recommender
2. Compile the files by running `$ cmake .` and `$ make`
3. Run ./mainExecutable/RunMovieRecommendations to start the program

### How to use
1. Enter into the terminal the basis that you would like for a movie recommendation
2. Follow the proceeding displayed instructions of what to input next into the terminal depending on your choice on 1
<img width="550" alt="image" src="https://user-images.githubusercontent.com/90938120/204364187-35b82046-6223-433c-8769-0d02873d7fa5.png">

3. View your generated recommended list of movies
<img width="354" alt="image" src="https://user-images.githubusercontent.com/90938120/204364359-6353457e-e52c-4be6-abd2-9a6948875cff.png">

4. If you would like to sort the list, enter a sorting basis (1-4)
<img width="475" alt="image" src="https://user-images.githubusercontent.com/90938120/204364417-225b806c-0778-47df-aeac-b6ad0f98e2bf.png">


### Testing/validation procedure
Testing was done with the GoogleTest testing framework (https://github.com/google/googletest). We tested the initialization of the allMovies vector as well as each sorting, recommendation, and getter function thoroughly. The sorting functions were tested with the first ten movies and the entire allMovies vector, checking for the highest and lowest for the entire vector. The recommendation functions were tested with several genres, actors, and directors that are in the database and with those that are not. The getter functions were tested alongside with the other test. We validate each input that the program receives. For example, if a string value is entered when an int value is needed, the program keep asking for an input until a valid int input is received.

