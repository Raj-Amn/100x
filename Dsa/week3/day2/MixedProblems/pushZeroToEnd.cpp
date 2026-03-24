#include<iostream>
#include<vector>

using namespace std;


void solve(){
  int n;
  cin>>n;
  vector<int>arr(n);

  for(int i=0; i<n; i++){
    cin>>arr[i];
  }

  int j= 0;

  for(int i=0; i<n; i++){
    if(arr[i] != 0){
      arr[j] = arr[i];
      j++;
    }
  }

  while(j<n){
    arr[j] = 0;
    j++;
  }

  for(int i=0; i<n; i++){
    cout<<arr[i]<<" ";
  }
  cout<<endl;


}

int main(){
  int t ;
  cin>>t;

  for(int i=1; i<=t; i++){
    solve();
  }

}
