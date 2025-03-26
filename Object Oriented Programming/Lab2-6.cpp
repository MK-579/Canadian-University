#include <iostream>
using namespace std;
class Triangle 
   {
      private:
         double side1, side2, side3;
      public:
         Triangle(double s1, double s2, double s3)
            {
               side1 = s1;
               side2 = s2;
               side3 = s3;
            }
      void print()
      {
         if (side1 == side2 && side2 == side3)
            {cout << "The triangle is Equilateral." << endl;} 
         else if (side1 == side2 || side2 == side3 || side1 == side3)
            {cout << "The triangle is Isosceles." << endl;} 
         else
            {cout << "The triangle is Scalene." << endl;}
      }
   };
int main() 
   {
      double 
         s1, s2, s3;
      cout << "Enter the length of Hypotenuse: ";
      cin >> s1;
      cout << "Enter the length of Base: ";
      cin >> s2;
      cout << "Enter the length of Perpendicular: ";
      cin >> s3;
      Triangle tri(s1, s2, s3);
      tri.print();
      return 0;
   }