#include <iostream>

using namespace std;

// Classes initialised with keyword `class`. Class variable start with a capital letter
// A blueprint/specification/template for making a 'book'
class Book {
  // any other code can access anything under public
  public:
    string title;
    string author;
    int pages;
};

int main()
{
  // Objects are instances of a class. An actual 'book'.
  Book book1;
  book1.title = "Harry Potter";
  book1.author = "J.K. Rowling";
  book1.pages = 500;
  
  Book book2;
  book2.title = "Lord of the Rings";
  book2.author = "Tolkien";
  book2.pages = 300;
  
  cout << book1.pages << endl;
  cout << book2.author << endl;
  
  return 0;
}