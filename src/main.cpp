#include <iostream>
#include <sstream>
using namespace std;


void outputIntroMessage(ostringstream & intro)
{
    intro << "Welcome to the Movie Recommender!\n";
    intro << "Please enter on what basis you would like to be recommended a movie:\n";
    intro << "1. Name\n";
    intro << "2. Genre\n";
    intro << "3. Starring actor\n";
    intro << "4. Director\n";
}

int main() {
    
    ostringstream currMessageToOutput;
    outputIntroMessage(currMessageToOutput);
    cout << currMessageToOutput.str();

    return 0;
}