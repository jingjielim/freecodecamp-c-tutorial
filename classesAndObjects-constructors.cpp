#include <iostream>

using namespace std;

// Classes initialised with keyword `class`. Class variable start with a capital letter
// A blueprint/specification/template for making a 'book'
class Book {
  public:
    string title;
    string author;
    int pages;
    // Constructor function. Book() runs everytime a book object is initialised
    Book (string aTitle, string aAuthor, int aPages) {
      title = aTitle;
      author = aAuthor;
      pages = aPages;
    }
    // You can create multiple constructors.
    Book () {
      title = "no title";
      author = "no author";
      pages = 0;
    }

};

int main()
{
  // Objects are instances of a class. An actual 'book'.
  Book book1("Harry Potter", "J.K. Rowling", 500);
  book1.pages = 700;
  Book book2("Lord of the Rings", "Tolkien", 300);
  Book book3;
  cout << book1.pages << endl;
  cout << book2.author << endl;
  cout << book3.author << endl;
  
  return 0;
}