#include <iostream>
using namespace std;
class Date 
   {
      private:
         int 
            day, month, year;
      public:
         void setDate(int d, int m, int y)
            {
               day = d;
               month = m;
               year = y;
            }
         int getDay() 
            {return day;}
         int getMonth() 
            {return month;}
         int getYear() 
            {return year;}
         bool isValid() 
            {
               if (month < 1 || month > 12) 
                  {return false;}
               if (day < 1)
                  {return false;}
               if (month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12)
                  {
                     if (day > 31) 
                        {return false;}
                  }
               else if (month == 4 || month == 6 || month == 9 || month == 11)
                  {
                     if (day > 30) 
                        {return false;}
                  }
               else if (month == 2)
                  {
                     if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) 
                        {
                           if (day > 29) 
                              {return false;}
                        } 
                     else 
                        {
                           if (day > 28) 
                              {return false;}
                        }
                  }
                  return true;
            }
   };
int main() 
   {
      Date myDate;
      int day, month, year;
      cout << "Enter day: ";
      cin >> day;
      cout << "Enter month: ";
      cin >> month;
      cout << "Enter year: ";
      cin >> year;
      myDate.setDate(day, month, year);
      if (myDate.isValid()) 
         {cout << "The date " << myDate.getDay() << "/" << myDate.getMonth() << "/" << myDate.getYear() << " is valid." << endl;} 
      else 
         {cout << "The date is invalid." << endl;}
      return 0;
   }