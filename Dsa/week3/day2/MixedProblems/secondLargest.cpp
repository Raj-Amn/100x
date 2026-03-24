#include <iostream>
#include <vector>

using namespace std;

int main() {
  int n;
  cin >> n;
  vector<int> arr(n);
  bool swapped = false;

  for (int i = 0; i < n; i++) {
    cin >> arr[i];
  }

  for (int i = 0; i < n - 1; i++) {

    int min = arr[i];
    int location = i;

    for (int j = i + 1; j < n; j++) {
      if (arr[j] < min) {
        min = arr[j];
        location = j;
      }
    }
    if (location != i) {
      swap(arr[i], arr[location]);
      swapped = true;
    }
  }

  if (swapped) {
    int target = arr[n - 1];
    for (int i = n - 2; i >= 0; i--) {
      if (arr[i] < target) {
        cout << arr[i] << endl;
        break;
      }
    }
  } else {
    cout << (-1) << endl;
  }
}
