#include <climits>
#include <iostream>
#include <vector>
using namespace std;

int calculateMaxprofit(vector<int> &wait, vector<int> &value, int n, int w) {

  if (w == 0 || n == 0) {
    return 0;
  }
  if (wait[n] > w) {
    return calculateMaxprofit(wait, value, n - 1, w);
  }

  return max(calculateMaxprofit(wait, value, n - 1, w - wait[n]) + value[n],
             calculateMaxprofit(wait, value, n - 1, w));
}

int main() {

  vector<int> wait = {1, 3, 4, 5};
  vector<int> value = {1, 4, 5, 7};
  int w = 7;
  vector<int> ans;

  cout << calculateMaxprofit(wait, value, 3, 7);
  return 0;
}
