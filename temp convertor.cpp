#include <iostream>
using namespace std;

int main()
{
  double ctemp;
  double ftemp;
  
  cout << "Input a celcius temp and press ENTER.";
  cin >> ctemp;
  ftemp = (ctemp * 1.8) + 32;
  cout << "Farenheiht temp is: " << ftemp;
  return 0;
}