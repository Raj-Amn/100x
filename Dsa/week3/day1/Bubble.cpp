#include <iostream>
#include <vector>
using namespace std;

int main() {
  int n;
  cin >> n;
  vector<int> arr(n);

  for (int i = 0; i < n; i++) {
    cin >> arr[i];
  }

  for (int i = 0; i < n - 1; i++) {
    int swapCount = 0;
    for (int j = 0; j < n - i - 1; j++) {
      if (arr[j] > arr[j + 1]) {
        swap(arr[j], arr[j + 1]);
        swapCount++;
      }
    }

    cout << "Pass " << i + 1 << ": ";

    for (int k = 0; k < n; k++) {
      cout << arr[k];
      if (k != n - 1)
        cout << " ";
    }

    cout << " , swaps = " << swapCount << endl;

    if (swapCount == 0) {
      break;
    }
  }

  return 0;
}
