#include "../include/Movies.h"
#include "../include/DatasetAccessor.h"
#include <algorithm>

Movies::Movies()
{
    DatasetAccessor movieDataset;
    allMovies = movieDataset.generateMoviesVector();
}

void Movies::SortRecommendedMoviesbyRating() {
    for (int i = this->recommendedMovies.size() / 2 - 1; i >= 0; i--) {
        heapify_Rating(this->recommendedMovies.size(), i);
    }

    // One by one extract an element from heap
    for (int i = this->recommendedMovies.size() - 1; i >= 0; i--) {
        // Move current root to end
        swap(this->recommendedMovies[0], this->recommendedMovies[i]);
 
        // call max heapify on the reduced heap
        heapify_Rating(i, 0);
    }
}

void Movies::heapify_Rating(int n, int i) {
    int smallest = i; // Initialize smallest as root
    int l = 2 * i + 1; // left = 2*i + 1
    int r = 2 * i + 2; // right = 2*i + 2
 
    // If left child is smaller than root
    if (l < n && this->recommendedMovies.at(l).getRating() < this->recommendedMovies.at(smallest).getRating())
        smallest = l;
 
    // If right child is smaller than smallest so far
    if (r < n && this->recommendedMovies.at(r).getRating() < this->recommendedMovies.at(smallest).getRating())
        smallest = r;
 
    // If smallest is not root
    if (smallest != i) {
        swap(this->recommendedMovies[i], this->recommendedMovies[smallest]);
 
        // Recursively heapify the affected sub-tree
        heapify_Rating(n, smallest);
    }
}