#include <iostream>
using namespace std;

int main() {
  int v[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
  int *p = &v[0];
  cout << "Pointer (stores the address) " << p << " Pointer's value " << *p
       << endl;
  for (auto &x : v) {
    cout << "Value (Copy) " << x << " Address " << &x << endl;
  }
}
