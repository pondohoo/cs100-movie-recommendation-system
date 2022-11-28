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


TEST(RatingSortTest, sortfirst10MoviesByRating) {
    Movies TestMovies1;
    
    for (int i = 0; i < 10; ++i) {
        TestMovies1.testPushBackforTestingOnly(TestMovies1.getallMoviesmovieForTestingOnly(i));
    }

    TestMovies1.SortRecommendedMoviesbyRating();
    
    EXPECT_EQ(TestMovies1.getMovieTestingOnly(0).getName(), "Star Wars: Episode V - The Empire Strikes Back");
    EXPECT_EQ(TestMovies1.getMovieTestingOnly(1).getName(), "The Shining");
    EXPECT_EQ(TestMovies1.getMovieTestingOnly(2).getName(), "Raging Bull");
    EXPECT_EQ(TestMovies1.getMovieTestingOnly(3).getName(), "The Blues Brothers");
    EXPECT_EQ(TestMovies1.getMovieTestingOnly(4).getName(), "Airplane!");
    EXPECT_EQ(TestMovies1.getMovieTestingOnly(5).getName(), "Caddyshack");
    EXPECT_EQ(TestMovies1.getMovieTestingOnly(6).getName(), "The Long Riders");
    EXPECT_EQ(TestMovies1.getMovieTestingOnly(7).getName(), "Superman II");
    EXPECT_EQ(TestMovies1.getMovieTestingOnly(8).getName(), "Friday the 13th");
    EXPECT_EQ(TestMovies1.getMovieTestingOnly(9).getName(), "The Blue Lagoon");

}

TEST(RatingSortTest, findHighestRated) {
    Movies TestMovies2;

    for (int i = 0; i < 7668; ++i) {
        TestMovies2.testPushBackforTestingOnly(TestMovies2.getallMoviesmovieForTestingOnly(i));
    }

    TestMovies2.SortRecommendedMoviesbyRating();

    // for (int i = 0; i < 10; ++i) {
    //     cout << TestMovies2.recommendedMovies.at(i).getName() << endl;
    //     cout << TestMovies2.recommendedMovies.at(i).getGenre() << endl;
    //     cout << TestMovies2.recommendedMovies.at(i).getDirector() << endl;
    //     cout << TestMovies2.recommendedMovies.at(i).getStarringActor() << endl;
    //     cout << TestMovies2.recommendedMovies.at(i).getRating() << endl;
    //     cout << TestMovies2.recommendedMovies.at(i).getTotalVotes() << endl;
    //     cout << TestMovies2.recommendedMovies.at(i).getReleaseYear() << endl;
    //     cout << endl;
    // }

    EXPECT_EQ(TestMovies2.getMovieTestingOnly(0).getName(), "The Shawshank Redemption");
}

TEST(RatingSortTest, findLowestRated) {
    Movies TestMovies3;

    for (int i = 0; i < 7668; ++i) {
        TestMovies3.testPushBackforTestingOnly(TestMovies3.getallMoviesmovieForTestingOnly(i));
    }

    TestMovies3.SortRecommendedMoviesbyRating();

    // cout << TestMovies3.recommendedMovies.at(7667).getName() << endl;
    // cout << TestMovies3.recommendedMovies.at(7667).getRating() << endl;
    // cout << TestMovies3.recommendedMovies.at(7666).getName() << endl;

    EXPECT_EQ(TestMovies3.getMovieTestingOnly(7667).getName(), "Love by Drowning");

}

TEST(NameSortTest, sortfirst10MoviesByName) {
    Movies TestMovies1;
    
    for (int i = 0; i < 10; ++i) {
        TestMovies1.testPushBackforTestingOnly(TestMovies1.getallMoviesmovieForTestingOnly(i));
    }

    TestMovies1.SortRecommendedMoviesbyName();
    
    EXPECT_EQ(TestMovies1.getMovieTestingOnly(0).getName(), "Airplane!");
    EXPECT_EQ(TestMovies1.getMovieTestingOnly(1).getName(), "Caddyshack");
    EXPECT_EQ(TestMovies1.getMovieTestingOnly(2).getName(), "Friday the 13th");
    EXPECT_EQ(TestMovies1.getMovieTestingOnly(3).getName(), "Raging Bull");
    EXPECT_EQ(TestMovies1.getMovieTestingOnly(4).getName(), "Star Wars: Episode V - The Empire Strikes Back");
    EXPECT_EQ(TestMovies1.getMovieTestingOnly(5).getName(),"Superman II" );
    EXPECT_EQ(TestMovies1.getMovieTestingOnly(6).getName(), "The Blue Lagoon");
    EXPECT_EQ(TestMovies1.getMovieTestingOnly(7).getName(), "The Blues Brothers");
    EXPECT_EQ(TestMovies1.getMovieTestingOnly(8).getName(), "The Long Riders");
    EXPECT_EQ(TestMovies1.getMovieTestingOnly(9).getName(), "The Shining");

}


TEST(PopularitySortTest, sortfirst10MoviesByPopularity) {
    Movies TestMovies1;
    
    for (int i = 0; i < 10; ++i) {
        TestMovies1.testPushBackforTestingOnly(TestMovies1.getallMoviesmovieForTestingOnly(i));
    }

    TestMovies1.SortRecommendedMoviesbyPopularity();
    
    EXPECT_EQ(TestMovies1.getMovieTestingOnly(0).getName(), "Star Wars: Episode V - The Empire Strikes Back");
    EXPECT_EQ(TestMovies1.getMovieTestingOnly(1).getName(), "The Shining");
    EXPECT_EQ(TestMovies1.getMovieTestingOnly(2).getName(), "Raging Bull");
    EXPECT_EQ(TestMovies1.getMovieTestingOnly(3).getName(), "Airplane!");
    EXPECT_EQ(TestMovies1.getMovieTestingOnly(4).getName(), "The Blues Brothers");
    EXPECT_EQ(TestMovies1.getMovieTestingOnly(5).getName(), "Friday the 13th");
    EXPECT_EQ(TestMovies1.getMovieTestingOnly(6).getName(), "Caddyshack");
    EXPECT_EQ(TestMovies1.getMovieTestingOnly(7).getName(), "Superman II");
    EXPECT_EQ(TestMovies1.getMovieTestingOnly(8).getName(), "The Blue Lagoon");
    EXPECT_EQ(TestMovies1.getMovieTestingOnly(9).getName(), "The Long Riders");

}


TEST(GetMovieTests, MovieIsIn) {
    Movies TestMovies1;

    string testName1 = "The Lego Ninjago Movie";
    Movie testMovie1("The Lego Ninjago Movie", "Animation", "Charlie Bean", "Jackie Chan", 6.0, 24000.0, 2017);

    EXPECT_EQ(TestMovies1.getMovie(testName1).getName(), testMovie1.getName());
    EXPECT_EQ(TestMovies1.getMovie(testName1).getGenre(), testMovie1.getGenre());
    EXPECT_EQ(TestMovies1.getMovie(testName1).getDirector(), testMovie1.getDirector());
    EXPECT_EQ(TestMovies1.getMovie(testName1).getStarringActor(), testMovie1.getStarringActor());
    EXPECT_EQ(TestMovies1.getMovie(testName1).getRating(), testMovie1.getRating());
    EXPECT_EQ(TestMovies1.getMovie(testName1).getTotalVotes(), testMovie1.getTotalVotes());
    EXPECT_EQ(TestMovies1.getMovie(testName1).getReleaseYear(), testMovie1.getReleaseYear());
}

TEST(GetMovieTests, MovieIsIn2) {
    Movies TestMovies2;

    string testName2 = "Immediate Family";
    Movie testMovie2("Immediate Family", "Drama", "Jonathan Kaplan", "Glenn Close", 6.0, 1500.0, 1989);
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




TEST(ReleaseSortTest, findHighestRelease) {
    Movies TestMovies;

    for (int i = 0; i < 7668; ++i) {
        TestMovies.testPushBackforTestingOnly(TestMovies.getallMoviesmovieForTestingOnly(i));
    }

    TestMovies.SortRecommendedMoviesbyRelease();

    EXPECT_EQ(TestMovies.getMovieTestingOnly(0).getReleaseYear(), 2020);
}


TEST(ReleaseSortTest, findlowestTestRelease) {
    Movies TestMovies;

    for (int i = 0; i < 7668; ++i) {
        TestMovies.testPushBackforTestingOnly(TestMovies.getallMoviesmovieForTestingOnly(i));
    }

    TestMovies.SortRecommendedMoviesbyRelease();

    EXPECT_EQ(TestMovies.getMovieTestingOnly(7667).getReleaseYear(), 1980);
}


TEST(DoesStarActorExistTests, JohnRitterTest) {
    Movies TestMovies1; 
    string actor = "John Ritter";

    EXPECT_EQ(TestMovies1.doesActorExist(actor), true);
}

TEST(DoesStarActorExistTests, SiyabongaMabasoTest) {
    Movies TestMovies2; 
    string actor = "Siyabonga Mabaso";

    EXPECT_EQ(TestMovies2.doesActorExist(actor), true);
}

TEST(DoesStarActorExistTests, RainerWernerFassbinderTest) {
    Movies TestMovies3; 
    string actor = "Rainer Werner Fassbinder";

    EXPECT_EQ(TestMovies3.doesActorExist(actor), true);
}

TEST(DoesStarActorExistTests, NotInallMovies1) {
    Movies TestMovies4; 
    string actor = "Camille Lacroix";

    EXPECT_EQ(TestMovies4.doesActorExist(actor), false);
}

TEST(DoesStarActorExistTests, NotInallMovies2) {
    Movies TestMovies5; 
    string actor = "Theo Fernandez";

    EXPECT_EQ(TestMovies5.doesActorExist(actor), false);
}

TEST(DoesDirectorExistTests, JohnPatrickShanleyTest) {
    Movies TestMovies1; 
    string director = "John Patrick Shanley";

    EXPECT_EQ(TestMovies1.doesDirectorExist(director), true);
}

TEST(DoesDirectorExistTests, CurtisHansonTest) {
    Movies TestMovies2; 
    string director = "Curtis Hanson";

    EXPECT_EQ(TestMovies2.doesDirectorExist(director), true);
}

TEST(DoesDirectorExistTests, SpikeLeeTest) {
    Movies TestMovies3; 
    string director = "Spike Lee";

    EXPECT_EQ(TestMovies3.doesDirectorExist(director), true);
}

TEST(DoesDirectorExistTests, NotInallMovies1) {
    Movies TestMovies4; 
    string director = "Andrea Sembrana";

    EXPECT_EQ(TestMovies4.doesDirectorExist(director), false);
}

TEST(DoesDirectorExistTests, NotInallMovies2) {
    Movies TestMovies5; 
    string director = "Eddie Nguyen";

    EXPECT_EQ(TestMovies5.doesDirectorExist(director), false);
}



int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}