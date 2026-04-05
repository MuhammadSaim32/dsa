#include <bits/stdc++.h>
using namespace std;

int main() {

  int t;
  cin >> t;

  for (int i = 0; i < t; i++) {
    int x, y, z;
    cin >> x, y, z;

    if ((x * y) / 2 < z) {
      cout << "yes";
    } else {
      cout << "no" << x * y;
    }
  }
}
