#include "gtest/gtest.h"
#include "../include/Movie.h"
#include "../include/Movies.h"
#include "../include/DatasetAccessor.h"
#include "iostream"

TEST(MoviesVectorSetupTests, TestFirstMovie)
{
    DatasetAccessor myDataset = DatasetAccessor();
    
    vector<Movie> generatedMovieVector = myDataset.generateMoviesVector();

    EXPECT_EQ(generatedMovieVector.at(0).getName(), "The Shining");
    EXPECT_EQ(generatedMovieVector.at(0).getStarringActor(), "Jack Nicholson");
    EXPECT_EQ(generatedMovieVector.at(0).getGenre(), "Drama");
    EXPECT_EQ(generatedMovieVector.at(0).getDirector(), "Stanley Kubrick");
    EXPECT_EQ(generatedMovieVector.at(0).getTotalVotes(), 927000);
    EXPECT_EQ(generatedMovieVector.at(0).getReleaseYear(), 1980);
    EXPECT_EQ(generatedMovieVector.at(0).getRating(), 8.4);
}

TEST(MoviesVectorSetupTests, TestFiftiethMovie)
{
    DatasetAccessor myDataset = DatasetAccessor();
    
    vector<Movie> generatedMovieVector = myDataset.generateMoviesVector();

    EXPECT_EQ(generatedMovieVector.at(49).getName(), "Lion of the Desert");
    EXPECT_EQ(generatedMovieVector.at(49).getStarringActor(), "Anthony Quinn");
    EXPECT_EQ(generatedMovieVector.at(49).getGenre(), "Biography");
    EXPECT_EQ(generatedMovieVector.at(49).getDirector(), "Moustapha Akkad");
    EXPECT_EQ(generatedMovieVector.at(49).getTotalVotes(), 15000);
    EXPECT_EQ(generatedMovieVector.at(49).getReleaseYear(), 1980);
    EXPECT_EQ(generatedMovieVector.at(49).getRating(), 8.3);
}

TEST(MoviesVectorSetupTests, Test2500thMovie)
{
    DatasetAccessor myDataset = DatasetAccessor();
    
    vector<Movie> generatedMovieVector = myDataset.generateMoviesVector();

    EXPECT_EQ(generatedMovieVector.at(2499).getName(), "Only You");
    EXPECT_EQ(generatedMovieVector.at(2499).getStarringActor(), "Marisa Tomei");
    EXPECT_EQ(generatedMovieVector.at(2499).getGenre(), "Comedy");
    EXPECT_EQ(generatedMovieVector.at(2499).getDirector(), "Norman Jewison");
    EXPECT_EQ(generatedMovieVector.at(2499).getTotalVotes(), 21000);
    EXPECT_EQ(generatedMovieVector.at(2499).getReleaseYear(), 1994);
    EXPECT_EQ(generatedMovieVector.at(2499).getRating(), 6.5);
}

TEST(MoviesVectorSetupTests, TestNumMovies) {
    DatasetAccessor myDataset = DatasetAccessor();
    
    vector<Movie> generatedMovieVector = myDataset.generateMoviesVector();

    // check if all 7668 movies were passed into the vector
    EXPECT_EQ(generatedMovieVector.size(), 7668);



}

TEST(RatingSortTest, sortfirst10MoviesByRating) {
    Movies TestMovies1;
    
    for (int i = 0; i < 10; ++i) {
        TestMovies1.recommendedMovies.push_back(TestMovies1.allMovies.at(i));
    }

    TestMovies1.SortRecommendedMoviesbyRating();
    
    EXPECT_EQ(TestMovies1.recommendedMovies.at(0).getName(), "Star Wars: Episode V - The Empire Strikes Back");
    EXPECT_EQ(TestMovies1.recommendedMovies.at(1).getName(), "The Shining");
    EXPECT_EQ(TestMovies1.recommendedMovies.at(2).getName(), "Raging Bull");
    EXPECT_EQ(TestMovies1.recommendedMovies.at(3).getName(), "The Blues Brothers");
    EXPECT_EQ(TestMovies1.recommendedMovies.at(4).getName(), "Airplane!");
    EXPECT_EQ(TestMovies1.recommendedMovies.at(5).getName(), "Caddyshack");
    EXPECT_EQ(TestMovies1.recommendedMovies.at(6).getName(), "The Long Riders");
    EXPECT_EQ(TestMovies1.recommendedMovies.at(7).getName(), "Superman II");
    EXPECT_EQ(TestMovies1.recommendedMovies.at(8).getName(), "Friday the 13th");
    EXPECT_EQ(TestMovies1.recommendedMovies.at(9).getName(), "The Blue Lagoon");

}

TEST()

TEST(RatingSortTest, findHighestRated) {
    Movies TestMovies2;

    TestMovies2.recommendedMovies = TestMovies2.allMovies;

    TestMovies2.SortRecommendedMoviesbyRating();

    for (int i = 0; i < 10; ++i) {
        cout << TestMovies2.recommendedMovies.at(i).getName() << endl;
        cout << TestMovies2.recommendedMovies.at(i).getGenre() << endl;
        cout << TestMovies2.recommendedMovies.at(i).getDirector() << endl;
        cout << TestMovies2.recommendedMovies.at(i).getStarringActor() << endl;
        cout << TestMovies2.recommendedMovies.at(i).getRating() << endl;
        cout << TestMovies2.recommendedMovies.at(i).getTotalVotes() << endl;
        cout << TestMovies2.recommendedMovies.at(i).getReleaseYear() << endl;
        cout << endl;
    }

    // EXPECT_EQ(TestMovies2.recommendedMovies.at(0).getName(), "The Shawshank Redemption");
}

