#include <iostream>
using namespace std;

class Book {
 public:
  string title;
  string author;
  int pages;

  Book() {
    title = "no title";
    author = "no author";
    pages = 0;
  }

  Book(string aTitle, string aAuthor, int aPages) {
    title = aTitle;
    author = aAuthor;
    pages = aPages;
  }
};

int main() {
  Book book1 = Book("Harry Potter", "JK Rowling", 400);
  Book book2 = Book("Lord of the Rings", "JRR Tolkien", 700);
  Book book3;

  cout << book1.title << endl;
  cout << book1.author << endl;
  cout << book1.pages << endl;

  cout << book2.title << endl;
  cout << book2.author << endl;
  cout << book2.pages << endl;

  cout << book3.title << endl;
  cout << book3.author << endl;
  cout << book3.pages << endl;

  return 0;
}
