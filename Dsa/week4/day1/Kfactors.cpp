#include<iostream>
using namespace std;

int main(){
  int n,q,k;
  cin>>n>>q>>k;

  int arr[n];
  for(int i=0; i<n; i++){
    cin>>arr[i];
  }

  // prefix array
  int count =0;
  int sum = 0;
  int prr[n];

  for(int i=0; i<n; i++){
    for(int j=1; j*j<=n; j++){
      int ans = arr[i]/j;
    }
  }

}
