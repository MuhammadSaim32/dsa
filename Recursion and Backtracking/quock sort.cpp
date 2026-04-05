#include <iostream>
#include <vector>
using namespace std;

int givepivot(int st, int end, vector<int> &arr) {

  int idx = -1;
  for (int j = 0; j < end; j++) {

    if (arr[j] < arr[end]) {
      idx++;
      swap(arr[j], arr[idx]);
    }
  }

  idx++;
  swap(arr[end], arr[idx]);

  return idx;
}

void quickSort(int st, int end, vector<int> &arr) {

  if (st < end) {
    int pivotIdx = givepivot(st, end, arr);
    quickSort(st, pivotIdx - 1, arr);
    quickSort(pivotIdx + 1, end, arr);
  }
}

int main() {
  vector<int> arr = {6, -11, -1110, 1};
  quickSort(0, 3, arr);
  for (auto i : arr) {
    cout << i << " ";
  }

  return 0;
}
