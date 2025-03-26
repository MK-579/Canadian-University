#include <iostream>
using namespace std;
class Rectangle 
   {
      public:
         double 
            length,width;
         double area() 
            {return length * width;}
         double perimeter() 
            {return 2 * (length + width);}
      void print() 
         {cout << "Area of the rectangle: " << area() << "\n" << "Perimeter of the rectangle: " << perimeter() << endl;}
   };
int main() 
   {
      Rectangle rec;
      cout << "Enter the length of the rectangle: ";
      cin >> rec.length;
      cout << "Enter the width of the rectangle: ";
      cin >> rec.width;
      rec.print();
      return 0;
   }