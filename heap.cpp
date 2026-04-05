#include <iostream>
#include <vector>
using namespace std;

class heap {
public:
  int arr[100];
  int size;
  heap() { size = 0; }

  void deleteroot() {
    arr[1] = arr[size];
    size--;
    int index = 1;
    while (index < size) {

      int left = index * 2;
      int right = index * 2 + 1;

      if (left <= size && arr[left] > arr[index]) {
        swap(arr[left], arr[index]);
        index = left;
      } else if (right <= size && arr[right] > arr[index]) {
        swap(arr[right], arr[index]);
        index = right;
      } else {
        return;
      }
    }
  }

  void insert(int value) {
    size++;
    int index = size;
    arr[index] = value;

    while (index > 1) {
      int parent = index / 2;
      if (arr[parent] < arr[index]) {
        swap(arr[parent], arr[index]);
        int index = parent;
      } else {
        return;
      }
    }
  }

  void print() {
    for (int i = 1; i <= size; i++) {
      cout << arr[i] << "\n";
    }
  }
};

void heapify(int *arr, int index, int size) {
  int larget = index;
  int left = index * 2;
  int right = index * 2 + 1;

  if (left <= size && arr[left] > arr[larget]) {
    larget = left;
  }

  if (right <= size && arr[right] > arr[larget]) {
    larget = right;
  }

  if (larget != index) {
    swap(arr[index], arr[larget]);
    heapify(arr, larget, size);
  }
}

int main() {

  heap h;

  int arr[] = {-1, 7, 12, 3, 10, 17, 2, 5};
  for (int i = 7 / 2; i > 0; i--) {
    //    heapify(arr, i, 7);
  }

  for (int i = 1; i < 8; i++) {
    //  cout << arr[i] << "\n";
  }

  string s = "ss";
  cout << s[0];
  return 0;
}
