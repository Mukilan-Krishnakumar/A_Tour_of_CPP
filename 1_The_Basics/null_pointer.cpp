#include <iostream>
using namespace std;

// Pointers in C++ are confusing, should revisit

int count_x(char *p, char x)
// count the number of occurrences of x in p[]
// p is assumed to point to a zero-terminated array of char (or to nothing)
{
  int count = 0;
  while (p) {
    if (*p == x)
      ++count;
    ++p;
  }
  return count;
}

int main() {
  char *p = nullptr;
  char x = 'i';
  cout << count_x(p, x) << endl;
}
