#include <iostream>
using namespace std;

int main() {

  int m, n;
  cin >> m >> n;

  int arr[m];
  int brr[n];

  int combo[m + n];

  for (int i = 0; i < m; i++) {
    cin >> arr[i];
  }

  for (int i = 0; i < n; i++) {
    cin >> brr[i];
  }

  int i = 0, j = 0, k = 0;

  while (i < m && j < n) {
    if (arr[i] > brr[j]) {
      combo[k] = brr[j];
      j++;
    } else {
      combo[k] = arr[i];
      i++;
    }
    k++;
  }

  while (i < m) {
    combo[k] = arr[i];
    i++;
    k++;
  }

  while (j < n) {
    combo[k] = brr[j];
    j++;
    k++;
  }

  for (int i = 0; i < m + n; i++) {
    cout << combo[i];
    if (i != m + n - 1) {
      cout << " ";
    }
  }
  cout << endl;
}
