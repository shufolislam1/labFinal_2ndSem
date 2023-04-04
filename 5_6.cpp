/*
    : Write a code for class which check a number even or odd.. 
*/

#include<iostream>
using namespace std;

class EvenOrOdd {
   private:
      int num;

   public:
      void setNum(int n) {
         num = n;
      }

      void checkEvenOrOdd() {
         if(num % 2 == 0)
            cout << num << " is an even number." << endl;
         else
            cout << num << " is an odd number." << endl;
      }
};

int main() {
   EvenOrOdd eo;
   int n;

   cout << "Enter a number: ";
   cin >> n;

   eo.setNum(n);
   eo.checkEvenOrOdd();

   return 0;
}

