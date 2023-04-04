/*
    : Write a Class program to find out the sum of series 1^2+2^2+...+n^2. 
*/

#include <iostream>
using namespace std;

class SumOfSeries {
   private:
      int n;

   public:
      void get_input() {
         cout << "Enter a number: ";
         cin >> n;
      }

      void sum() {
         int result = 0;

         for (int i = 1; i <= n; ++i) {
            result += i * i;
         }

         cout << "The sum of the series 1^2 + 2^2 + ... + " << n << "^2 is: " << result;
      }
};

int main() {
   SumOfSeries s;
   s.get_input();
   s.sum();

   return 0;
}

