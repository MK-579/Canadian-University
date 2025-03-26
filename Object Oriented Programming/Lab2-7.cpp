#include <iostream>
#include <string>
using namespace std;
class Employee 
   {
      private:
         string 
            name,employeeID;
         double 
            salary;
      public:
         Employee(string n, string id, double s)
            {
               name = n;
               employeeID = id;
               salary = s;
            }
      void SalaryBasedOnPerformance(double performance)
         {
            if (performance > 90) 
               {salary += 1000; } 
            else if (performance > 75) 
               {salary += 500;} 
            else
               {salary += 100;}
         }
      void print()
         {
            cout << "Employee Name: " << name << endl;
            cout << "Employee ID: " << employeeID << endl;
            cout << "Employee Salary: " << salary << endl;
         }
   };
int main() 
   {
      string
         name,employeeID;
      double 
         salary, performance;
      cout << "Enter employee name: ";
      cin >> name;
      cout << "Enter employee ID: ";
      cin >> employeeID;
      cout << "Enter initial salary: ";
      cin >> salary;
      Employee Emp(name, employeeID, salary);
      cout << "Enter employee performance (0-100): ";
      cin >> performance;
      Emp.SalaryBasedOnPerformance(performance);
      Emp.print();
      return 0;
   }