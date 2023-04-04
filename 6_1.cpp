/*
    : Create a class called Box that contains one public function (print volume) and three public 
variables (height and length and width). Declare the height, length and width as integer 
value. Use public function print_volume () to calculate the volume of a box and display the 
volume 
*/

#include <iostream>
using namespace std;

class Box {
   public:
      int height;
      int length;
      int width;

      void print_volume() {
         int volume = height * length * width;
         cout << "The volume of the box is: " << volume << endl;
      }
};

int main() {
   Box b;

   b.height = 5;
   b.length = 10;
   b.width = 2;

   b.print_volume();

   return 0;
}

