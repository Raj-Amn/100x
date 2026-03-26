#include <iostream>
using namespace std;

void solve(long long a, long long b) {
  long long sumton = (b * (b + 1)) / 2;
  a = a - 1;
  long long sumbeforea = (a * (a + 1) / 2);
  long long result = sumton - sumbeforea;
  cout << result<<endl;
}

int main() {

  int n;
  cin >> n;

  for (int i = 0; i < n; i++) {
    long long a, b;
    cin >> a >> b;
    solve(a, b);
  }
}
