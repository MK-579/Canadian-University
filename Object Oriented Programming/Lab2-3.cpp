#include <iostream>
using namespace std;
class Person
   {
      public:
         string 
            name,country;
         int age;
      void print() 
         {cout << "Name: " << name << "\n" << "Age: " << age << "\n"<< "Country: " << country << endl;}
   };
int main() 
   {
      Person per;
      cout << "Enter your name: ";
      cin >> per.name;
      cout << "Enter your age: ";
      cin >> per.age;
      cout << "Enter your country: ";
      cin >> per.country;
      per.print();
      return 0;
   }