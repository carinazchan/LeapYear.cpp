#include <iostream>

int main() {

  //Variables
  int year = 0;

  //Get year input from user
  std::cout << "Year: ";
  std::cin >> year;

  if ( (year % 4) == 0 ) //Works
  {
    std::cout << year << " is a leap year.\n";
  }
//------------------
  else if ( (year % 400 == 0) && ((year % 4) == 0) )
  {
    std::cout << year << " is a leap year.\n";
  }
//------------------
  else
    {
      std::cout << year << " is NOT a leap year.\n";
    }


}
