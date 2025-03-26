#include <iostream>
using namespace std;
class Car
   {
      public:
         string 
            company,model;
         int year;
      void print() 
         {cout << "Company: " << company << "\n" << "Model: " << model << "\n"<< "Year: " << year << endl;}
   };
int main()
   {
      Car car;
      cout << "Enter the company: ";
      cin >> car.company;
      cout << "Enter the model: ";
      cin >> car.model;
      cout << "Enter the year: ";
      cin >> car.year;
      car.print();
      return 0;
   }