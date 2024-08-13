#include <complex>
#include <iostream>
#include <vector>

using namespace std;

int main() {
  cout << "Size of Char " << sizeof(char) << "\n";
  cout << "Size of Int " << sizeof(int) << "\n";
  cout << "Size of Bool " << sizeof(bool) << "\n";
  cout << "Size of Double " << sizeof(double) << "\n";

  complex<double> i = 1;
  cout << "Complex value " << i << "\n";

  vector<int> v{1, 2, 3, 4, 5, 6};
  cout << "Vector Size " << sizeof(v) << "\n";

  cout << "Vector values \n";
  for (int i = 0; i < v.size(); i++) {
    cout << "Value: " << i << "\n";
  }
}
