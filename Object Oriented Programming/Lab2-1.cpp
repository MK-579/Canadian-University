#include <iostream>
#include <cmath>
using namespace std;
class Circle 
   {
      public:
         double radius;
         double area() 
            {return M_PI * radius * radius;}
         double circumference() 
            {return 2 * M_PI * radius;}
      void print() 
         {cout << "Area of the circle: " << area() << "\n" << "Circumference of the circle: " << circumference() << endl;}
   };
int main() 
   {
      Circle cir;
      cout << "Enter the radius of the circle: ";
      cin >> cir.radius;
      cir.print();
      return 0;
   }