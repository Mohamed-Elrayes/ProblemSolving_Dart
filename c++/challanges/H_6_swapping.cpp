
#include <iostream>
using namespace std;

int main()
{
  int num1, num2, num3;
  cin >> num1 >> num2;
  num3 = num1;
  num1 = num2;
  cout << num1 << " " << num3;
  return 0;
}