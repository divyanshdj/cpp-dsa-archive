/*

19. Write a program to read any weekday number in integer and display the
weekday name in word format.

*/

#include <iostream>
using namespace std;
int main()
{
  int num;
  cout << "Enter the Number : ";
  cin >> num;

  switch (num)
  {
  case 1:
  {
    cout << "Monday" << endl;
    break;
  }
  case 2:
  {
    cout << "Tuesday" << endl;
    break;
  }
  case 3:
  {
    cout << "Wednesday" << endl;
    break;
  }
  case 4:
  {
    cout << "Thursday" << endl;
    break;
  }
  case 5:
  {
    cout << "Friday" << endl;
    break;
  }
  case 6:
  {
    cout << "Saturday" << endl;
    break;
  }
  case 7:
  {
    cout << "Sunday" << endl;
    break;
  }
  default:
  {
    cout << "Invalid Choice!" << endl;
    break;
  }
  }
  return 0;
}