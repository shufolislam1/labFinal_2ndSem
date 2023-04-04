/*
    : Simple class program to find factorial number using class factorial. And take the input value 
as a private member and declare two public member function get_input() to get the input 
from user. And another function is fact () to calculate the factorial of the input

*/


#include <iostream>
using namespace std;

class Factorial {
   private:
      int num;

   public:
      void get_input() {
         cout << "Enter a number: ";
         cin >> num;
      }

      void fact() {
         int result = 1;

         for (int i = 1; i <= num; ++i) {
            result *= i;
         }

         cout << "Factorial of " << num << " is: " << result;
      }
};

int main() {
   Factorial f;
   f.get_input();
   f.fact();

   return 0;
}

