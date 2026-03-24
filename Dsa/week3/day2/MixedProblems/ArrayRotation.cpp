#include<iostream>
using namespace std;


void solve(){
  int n;
  cin>>n;

  int arr[n];

  for (int i=0; i<n; i++) {
    cin>>arr[i];
  }

  int min = arr[0];
  int location = 0;

  for (int i=0; i<n; i++) {
    if(arr[i]<min){
      min = arr[i];
      location = i;
    }
  }

  cout<<location<<endl;



}


int main () {
  int t;
  cin>>t;
  for(int i=1; i<=t; i++){
    solve();
  }
  return 0;
}
