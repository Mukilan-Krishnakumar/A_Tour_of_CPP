#include <iostream>
using namespace std;

int main() {
  int v[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
  for (auto i : v) {
    cout << "Current value: " << i << endl;
  }
}
