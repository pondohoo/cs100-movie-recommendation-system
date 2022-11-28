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

TEST(MoviesVectorSetupTests, TestMoviesWithComma) {
    DatasetAccessor myDataset = DatasetAccessor();
    
    vector<Movie> generatedMovieVector = myDataset.generateMoviesVector();
    EXPECT_EQ(generatedMovieVector.at(71).getName(), "Bon Voyage, Charlie Brown (and Don't Come Back!!)");
    EXPECT_EQ(generatedMovieVector.at(71).getGenre(), "Animation");
    EXPECT_EQ(generatedMovieVector.at(71).getReleaseYear(), 1980);
    EXPECT_EQ(generatedMovieVector.at(71).getRating(), 7.3);
    EXPECT_EQ(generatedMovieVector.at(71).getTotalVotes(), 2900);
    EXPECT_EQ(generatedMovieVector.at(71).getDirector(), "Bill Melendez");
    EXPECT_EQ(generatedMovieVector.at(71).getStarringActor(), "Scott Beach");

    EXPECT_EQ(generatedMovieVector.at(1476).getName(), "The Cook, the Thief, His Wife & Her Lover");
    EXPECT_EQ(generatedMovieVector.at(1476).getGenre(), "Crime");
    EXPECT_EQ(generatedMovieVector.at(1476).getReleaseYear(), 1989);
    EXPECT_EQ(generatedMovieVector.at(1476).getRating(), 7.6);
    EXPECT_EQ(generatedMovieVector.at(1476).getTotalVotes(), 36000);
    EXPECT_EQ(generatedMovieVector.at(1476).getDirector(), "Peter Greenaway");
    EXPECT_EQ(generatedMovieVector.at(1476).getStarringActor(), "Richard Bohringer");

}

TEST(MoviesVectorSetupTests, TestNumMovies) {
    DatasetAccessor myDataset = DatasetAccessor();
    
    vector<Movie> generatedMovieVector = myDataset.generateMoviesVector();

    // check if all 7668 movies were passed into the vector
    EXPECT_EQ(generatedMovieVector.size(), 7668);



}



TEST(RecommendedMoviesDirectorTests, IrvinKershnerTest) {
   Movies TestMovies1;
   std::string Director = "Irvin Kershner";
  
   TestMovies1.generateRecommendations(Director, 3);
 
   EXPECT_EQ(TestMovies1.getMovieTestingOnly(0).getName(), "Star Wars: Episode V - The Empire Strikes Back");
   EXPECT_EQ(TestMovies1.getMovieTestingOnly(1).getName(), "Never Say Never Again");
   EXPECT_EQ(TestMovies1.getMovieTestingOnly(2).getName(), "RoboCop 2");

 
   EXPECT_EQ(TestMovies1.sizeofRecommendedForTestingOnly(), 3);
 
}
 
TEST(RecommendedMoviesDirectorTests, StanleyKubrickTest) {
   Movies TestMovies2;
   string Director = "Stanley Kubrick";
  
   TestMovies2.generateRecommendations(Director, 3);
 
   EXPECT_EQ(TestMovies2.getMovieTestingOnly(0).getName(), "The Shining");
   EXPECT_EQ(TestMovies2.getMovieTestingOnly(1).getName(), "Full Metal Jacket");
   EXPECT_EQ(TestMovies2.getMovieTestingOnly(2).getName(), "Eyes Wide Shut");
   
 
   EXPECT_EQ(TestMovies2.sizeofRecommendedForTestingOnly(), 3);
 
}





TEST(RecommendedMoviesActorTests, DwayneJohnsonTest) {
   Movies TestMovies1;
   string Actor = "Dwayne Johnson";
  
   TestMovies1.generateRecommendations(Actor, 2);
 
   EXPECT_EQ(TestMovies1.getMovieTestingOnly(0).getName(), "The Scorpion King");
   EXPECT_EQ(TestMovies1.getMovieTestingOnly(1).getName(), "The Rundown");
   EXPECT_EQ(TestMovies1.getMovieTestingOnly(2).getName(), "Walking Tall");

 
   EXPECT_EQ(TestMovies1.sizeofRecommendedForTestingOnly(), 22);
 
}
 
TEST(RecommendedMoviesActorTests, ChrisPrattTest) {
   Movies TestMovies2;
   string Actor = "Chris Pratt";
  
   TestMovies2.generateRecommendations(Actor, 2);
 
   EXPECT_EQ(TestMovies2.getMovieTestingOnly(0).getName(), "Guardians of the Galaxy");
   EXPECT_EQ(TestMovies2.getMovieTestingOnly(1).getName(), "The Lego Movie");
   EXPECT_EQ(TestMovies2.getMovieTestingOnly(2).getName(), "Jurassic World");
   
 
   EXPECT_EQ(TestMovies2.sizeofRecommendedForTestingOnly(), 6);
 
}



TEST(PrintRecommendedMoviesTests, NoMoviesFound) {
    Movies TestMovies;
    for (int i = 0; i < 10; ++i) {
        TestMovies.testPushBackforTestingOnly(TestMovies.getallMoviesmovieForTestingOnly(i));
    }
    EXPECT_EQ(TestMovies.PrintRecommendedMovies(5), 0);
}
TEST(PrintRecommendedMoviesTests, FullPage10Movies) {
    Movies TestMovies;
    for (int i = 0; i < 100; ++i) {
        TestMovies.testPushBackforTestingOnly(TestMovies.getallMoviesmovieForTestingOnly(i));
    }
    EXPECT_EQ(TestMovies.PrintRecommendedMovies(0), 10);
}
TEST(PrintRecommendedMoviesTests, NotFullPageMovies) {
    Movies TestMovies;
    for (int i = 0; i < 5; ++i) {
        TestMovies.testPushBackforTestingOnly(TestMovies.getallMoviesmovieForTestingOnly(i));
    }
    EXPECT_EQ(TestMovies.PrintRecommendedMovies(0), 5);
}


int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}