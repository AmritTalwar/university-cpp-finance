#include <iostream>

using namespace std;

int main()
{
  char name[256];

  cout << "What is your name" << endl;
  cin.getline(name, 256);
  cout << "Hello " << name << endl;

  return 0;
}
