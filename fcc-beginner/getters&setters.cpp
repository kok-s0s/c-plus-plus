#include <iostream>
using namespace std;

class Movie {
private:
  string rating;
  string title;
  string director;

public:
  Movie(string rating, string title, string director) {
    this->rating = rating;
    this->title = title;
    this->director = director;
  }
  void setRating(string rating) { this->rating = rating; }
  string getRating() { return this->rating; }
  void setTitle(string title) { this->title = title; }
  string getTitle() { return this->title; }
  void setDirector(string director) { this->director = director; }
  string getDirector() { return this->director; }
};

int main() {
  Movie movie("PG", "The Shawshank Redemption", "Frank Darabont");

  cout << "Movie rating: " << movie.getRating() << endl;

  movie.setRating("R");

  cout << "Movie rating: " << movie.getRating() << endl;

  return 0;
}
