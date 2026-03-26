#include <iostream>
using namespace std;

int main() {
  long long n;
  cin >> n;
  bool prime = true;

  if (n <= 1) {
    prime = false;
  }

  for (long long i = 2; i * i <= n; i++) {
    if (n % i == 0) {
      prime = false;
      break;
    }
  }

  if (prime) {
    cout << "YES" << endl;
  } else {
    cout << "NO" << endl;
  }
}
