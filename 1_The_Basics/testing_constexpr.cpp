#include <iostream>
using namespace std;

const int secret = 42;
// Uncomment the commented lines in function to see the err
constexpr double square(double x) {
  // int m = x + x * x;
  // cout << "This is the m value " << m << endl;
  return x * x;
}

int main() {
  cout << square(secret) << endl;
  cout << square(11) << endl;
}
