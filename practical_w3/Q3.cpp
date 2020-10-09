#include <iostream>

using namespace std;

int getInputInteger()
{
  int inputInteger;

  cout << "Enter integer" << endl;
  cin >> inputInteger;

  while (!cin.good())
  {
    cout << "ERROR: inavlid input type" << endl;

    cin.clear();
    cin.ignore(INT_MAX, '\n');

    cout << "Enter integer" << endl;
    cin >> inputInteger;
  };

  return inputInteger;
}

bool integerIsValid(int integer)
{
  bool valid = false;

  if (integer < 0)
  {
    cout << "ERROR: integer less than 0" << endl;
  }
  else
  {
    int inputCopy = integer;
    int inputIntegerLength = 0;

    while (inputCopy != 0)
    {
      inputCopy /= 10;
      inputIntegerLength += 1;
    }

    if (inputIntegerLength != 3)
    {
      cout << "ERROR: integer length does not equal 3" << endl;
    }
    else
    {
      valid = true;
    }
  }

  return valid;
}

int getAndValidateInput()
{
  int inputInteger;
  bool inputIntegerIsValid = false;

  while (!inputIntegerIsValid)
  {
    inputInteger = getInputInteger();
    inputIntegerIsValid = integerIsValid(inputInteger);
  }

  return inputInteger;
}

string reverseInteger(int integer)
{
  string integerToString = to_string(integer);
  reverse(integerToString.begin(), integerToString.end());

  return integerToString;
}

int main()
{
  int integer = getAndValidateInput();
  string reversedInteger = reverseInteger(integer);

  cout << "Reversed integer: " << reversedInteger << endl;

  return 0;
}
