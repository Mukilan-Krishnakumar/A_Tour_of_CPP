#include <iostream>

using namespace std;

// following function returns a double value
double square(double x) { return x * x; }

void print_square(double x) {
  // The function does not return anything - void
  cout << "The square of " << x << " is " << square(x) << "\n";
}

int main() { print_square(1.234); }
