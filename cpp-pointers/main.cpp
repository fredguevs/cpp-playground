#include <iostream>
using namespace std;

int main() {
  int x = 3;
  int *ptr = &x;

  int &y = *ptr;
  y++;
  cout << x << endl; // prints 6
  // hi
  return 0;
}