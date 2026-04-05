#include <iostream>
#include <vector>
using namespace std;

void merge(int st, int mid, int end, vector<int> &arr, vector<int> &temp) {
  temp.clear();
  int i = st;
  int j = mid + 1;

  while (i <= mid && j <= end) {
    if (arr[i] < arr[j]) {
      temp.push_back(arr[i]);
      i++;
    } else {
      temp.push_back(arr[j]);
      j++;
    }
  }

  while (i <= mid) {
    temp.push_back(arr[i]);
    i++;
  }
  while (j <= end) {
    temp.push_back(arr[j]);
    j++;
  }

  for (int i = 0; i < temp.size(); i++) {

    arr[i + st] = temp[i];
  }
}

void divide(int st, int end, vector<int> &arr, vector<int> &temp) {

  if (st < end) {

    int mid = st + ((end - st) / 2);

    divide(st, mid, arr, temp);
    divide(mid + 1, end, arr, temp);
    merge(st, mid, end, arr, temp);
  }
}

int main() {

  vector<int> temp;
  int n;
  cin >> n;
  vector<int> arr(n);
  for (int i = 0; i < n; i++) {
    cin >> arr[i];
  }

  divide(0, n - 1, arr, temp);
  for (auto i : arr) {
    cout << i << " ";
  }
  cout << endl;
  return 0;
}
