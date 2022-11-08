# Movie Recommender
## Phase I - Proposal

Authors
- [Camille Lacroix](https://github.com/clacr002)
- [Theo Fernandez](https://github.com/pondohoo)
- [Eddie Nguyen](https://github.com/Neguyen-Edy)
- [Andrea Sembrana](https://github.com/andreasembrana19)
 
 
 ### Project description
 
* As university's students, we spend most of our time working on projects, assignements or exams. but where there is a time for work there is also a time for relaxing. What's better than movie nights on fridays? With the fatigue it might get difficult to select a movie to watch. No worries! This application will help you chose the best movie to relax to. Our project will consist of recommending a movie using different genre/subgenre listings.

* To build our movie recommender, we will use C++, a movies dataset, any outside libraries that might assist with the movie database, and movie recommendation algorithm. Group members will push their parts to Github as Pull Requests, where other group members will then review said pull requests for any issues they might have.

* The input of this application will allow users to enter 1 genre, 1 subgenre, both a genre and a subgenre, or a movie name. 

* Potential genres include:
 * comedy, sci-fi, horror, romance, action, thriller, drama, mystery, etc.

* Potential subgenres include:
 * director, writer, actors

* Using a recommendation algorithm, the program will generate a selection of movies based on the given criteria

* This selection will then be outputted to the user

* The outputted list can be sorted based on rating, release date, alphabetical order, or popularity
 
## Phase II - Documentation

### Class Diagram

<img width="897" alt="Screen Shot 2022-10-31 at 17 33 18" src="https://user-images.githubusercontent.com/90938120/199135624-96287e93-982f-47d4-98c8-265237a0a18c.png">

 ### Diagram Description
Movie class: used to create objects of individual movies so that various information about each movie can be quickly accessed and displayed to the screen
Movies class: an interface that allows for recommendations of movies to be created from a vector array of Movie objects and sorted based on various options

