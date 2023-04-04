/*
    : Create a class called card that maintains a library card catalog entry. In the card, it will store 
a book's title, author and number of copies on hand. Store the title, author as string and the 
number of books on hand as an integer value. Use two public functions store () to store the 
title, author and number of books on hand. And another public function display() will display 
the information
*/

#include <iostream>
#include <string>
using namespace std;

class Card {
   private:
      string title;
      string author;
      int numCopies;

   public:
      void store(string t, string a, int n) {
         title = t;
         author = a;
         numCopies = n;
      }

      void display() {
         cout << "Title: " << title << endl;
         cout << "Author: " << author << endl;
         cout << "Number of Copies: " << numCopies << endl;
      }
};
int main() {
   Card c;

   c.store("To Kill a Mockingbird", "Harper Lee", 3);
   c.display();

   return 0;
}
