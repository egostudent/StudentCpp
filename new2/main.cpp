#include <iostream>

using namespace std;

int main()
{

  int number;

  cout << "Enter a number: ";
  cin >> number;
  cin.ignore();
  cout << "You entered: "<< number <<"\n";
  cin.get();

  int division;

  division = number / 2;
  cin.ignore();
  cout << "Turn out: "<< division <<"\n";
  cin.get();
  return 0;
}
