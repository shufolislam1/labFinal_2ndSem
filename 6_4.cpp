/*
     Simple class program to find prime number using class prime. And take the input value as a 
private member and declare two public member function get_input() to get the input from 
user. And another function is calculate() to calculate the input is prime or not and display it 
using calculate () function.
*/

#include <iostream>
using namespace std;

class Prime {
   private:
      int num;

   public:
      void get_input() {
         cout << "Enter a number: ";
         cin >> num;
      }

      void calculate() {
         bool isPrime = true;

         if (num <= 1) {
            isPrime = false;
         } else {
            for (int i = 2; i <= num / 2; ++i) {
               if (num % i == 0) {
                  isPrime = false;
                  break;
               }
            }
         }

         if (isPrime)
            cout << num << " is a prime number.";
         else
            cout << num << " is not a prime number.";
      }
};

int main() {
   Prime p;
   p.get_input();
   p.calculate();

   return 0;
}

