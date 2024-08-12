#include <iostream>
#include <string>

using namespace std;

void print(int a) { cout << a << "\n"; }

void print(double a) { cout << a << "\n"; }

void print(string a) { cout << a << "\n"; }

// If two functions are defined with the same name but different argument types
// The compiler will choose the most appropriate function for each call.
int main() {
  print(42);
  print(9.65);
  print("Mukilan here");
}
