#include <iostream>
using namespace std;

int main() {
  int n;
  cin >> n;
  int arr[n];

  for (int i = 0; i < n; i++) {
    cin >> arr[i];
  }

  // sorting
  for (int i = 1; i < n; i++) {

    int temp = arr[i];
    int j = i - 1;

    while (arr[j] > temp and j >= 0) {
      arr[j + 1] = arr[j];
      j--;
    }
    arr[j + 1] = temp;

    cout << "Pass " << i << ":";

    for (int i = 0; i < n; i++) {
      cout << arr[i] << " ";
    }

    cout << ", ";

    for (int j = 0; j < i; j++) {
      cout << arr[j] << " ";
    }
    cout << "| ";

    for (int j = i + 1; j < n; j++) {
      cout << arr[j] << " ";
    }
  }
}
