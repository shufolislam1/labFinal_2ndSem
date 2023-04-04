/*
: A constructor function will input three numbers and destructor function will print the average 
of those numbers. 

*/

#include <iostream>
using namespace std;

class AverageCalculator {
   private:
      double num1, num2, num3;

   public:
      AverageCalculator(double n1, double n2, double n3) {
         num1 = n1;
         num2 = n2;
         num3 = n3;
      }

      ~AverageCalculator() {
         double average = (num1 + num2 + num3) / 3;
         cout << "The average of the three numbers is: " << average;
      }
};

int main() {
   AverageCalculator a(3, 6, 9);
   return 0;
}

