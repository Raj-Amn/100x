#include <iostream>
using namespace std;

int main() {
  int n;
  cin >> n;
  int arr[n];

  for (int i = 0; i < n; i++) {
    cin >> arr[i];
  }

  for (int i = 1; i < n; i++) {

    int temp = arr[i];
    int j = i - 1;
    int shifts = 0;

    while (j >= 0 and arr[j] > temp) {
      arr[j + 1] = arr[j];
      shifts++;
      j--;
    }

    arr[j + 1] = temp;

    cout << "Pass " << i << ": ";

    for (int i = 0; i < n; i++) {
      cout << arr[i] << " ";
    }

    cout << ", ";

    for (int j = 0; j <= i; j++) {
      cout << arr[j] << " ";
    }

    cout << "| ";

    for (int j = i + 1; j < n; j++) {
      cout << arr[j] << " ";
    }

    cout << ", shifts = " << shifts;

    cout << endl;
  }
}
