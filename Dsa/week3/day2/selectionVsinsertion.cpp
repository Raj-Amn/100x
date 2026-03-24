#include <iostream>
using namespace std;

void solution() {

  int n;
  cin >> n;
  int arr[n];
  int arr2[n];
  int shifts = 0;
  int swaps = 0;

  // input
  for (int i = 0; i < n; i++) {
    cin >> arr[i];
  }

  for (int i = 0; i < n; i++) {
    arr2[i] = arr[i];
  }

  // insertion sort
  for (int i = 1; i < n; i++) {

    int temp = arr[i];
    int j = i - 1;

    while (j >= 0 and arr[j] > temp) {
      arr[j + 1] = arr[j];
      shifts++;
      j--;
    }
    arr[j + 1] = temp;
  }

  // selection sort

  for (int i = 0; i < n - 1; i++) {

    int min = arr2[i];
    int location = i;

    for (int j = i + 1; j < n; j++) {
      if (arr2[j] < min) {
        min = arr2[j];
        location = j;
      }
    }

    if (location != i) {
      swap(arr2[i], arr2[location]);
      swaps++;
    }
  }

  // comparison
  if (shifts == swaps) {
    cout << "Tie" << endl;
  } else if (shifts > swaps) {
    cout << "Selection Sort" << endl;
  } else {
    cout << "Insertion Sort" << endl;
  }
}

int main() {
  int t;
  cin >> t;

  for (int i = 0; i < t; i++) {
    solution();
  }
}
