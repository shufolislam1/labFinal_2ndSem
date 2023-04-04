/*
     Write a code for class which check a char vowel or consonant.
*/

#include <iostream>
using namespace std;

class VowelOrConsonant {
   private:
      char ch;

   public:
      void setChar(char c) {
         ch = c;
      }

      void checkVowelOrConsonant() {
         if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
            ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U')
            cout << ch << " is a vowel." << endl;
         else
            cout << ch << " is a consonant." << endl;
      }
};

int main() {
   VowelOrConsonant voc;
   char c;

   cout << "Enter a character: ";
   cin >> c;

   voc.setChar(c);
   voc.checkVowelOrConsonant();

   return 0;
}

