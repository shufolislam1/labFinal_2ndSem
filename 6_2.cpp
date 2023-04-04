/*
    : Create a class called person that maintains a register. In the register, it contains name and 
address and blood group, date of birth and identification number. Store the name, address 
and blood group as string and the identification number as an integer value. Use two public 
functions contain () to store the name, address, date of birth, blood group and identification 
number. And another public function display() will display the information.
*/

#include <iostream>
#include <string>
using namespace std;

class Person {
   private:
      string name;
      string address;
      string bloodGroup;
      string dateOfBirth;
      int idNumber;

   public:
      void contain(string n, string a, string b, string d, int i) {
         name = n;
         address = a;
         bloodGroup = b;
         dateOfBirth = d;
         idNumber = i;
      }

      void display() {
         cout << "Name: " << name << endl;
         cout << "Address: " << address << endl;
         cout << "Blood Group: " << bloodGroup << endl;
         cout << "Date of Birth: " << dateOfBirth << endl;
         cout << "Identification Number: " << idNumber << endl;
      }
};

int main() {
   Person p;

   p.contain("John Doe", "123 Main St", "O+", "01/01/1990", 123456);
   p.display();

   return 0;
}

