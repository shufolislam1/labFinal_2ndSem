/*
    : Parent class will be par which have a string. Print the string with help of a child class named
chil. 5. Base class have values of height & width of a triangle. Calculate the area of the
triangle with help of a sub class.

*/

#include <iostream>
#include <string>

using namespace std;

class Par
{
protected:
    string str;

public:
    Par(string s)
    {
        str = s;
    }
};

class Chil : public Par
{
public:
    Chil(string s) : Par(s) {}

    void print_string()
    {
        cout << str << endl;
    }
};

int main()
{
    Chil chil_obj("Hello, world!");
    chil_obj.print_string();

    return 0;
}
