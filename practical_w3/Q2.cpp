#include <iostream>

using namespace std;

int main()
{
  int integer_one;
  int integer_two;

  cout << "Please enter the first integer" << endl;
  cin >> integer_one;

  cout << "Please enter the second integer" << endl;
  cin >> integer_two;

  cout << "sum " << integer_one + integer_two << endl;
  cout << "product " << integer_one * integer_two << endl;
  cout << "average " << (integer_one + integer_two) / 2 << endl;
  cout << "difference " << abs(integer_one - integer_two) << endl;

  return 0;
}
