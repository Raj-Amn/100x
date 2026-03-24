
#include<iostream>
#include<vector>
using namespace std;


void solve(){
  int n;
  cin>>n;
  vector<int>arr;

  for (int i=0; i<n; i++) {
    int x;
    cin>>x;
    arr.push_back(x);
  }

  int k;
  cin>>k;
  arr.insert(arr.end(),arr.begin(),arr.begin()+k);
  arr.erase(arr.begin(),arr.begin()+k);


  for(int x:arr){
    cout<<x<<" "; 
  }
  cout<<endl;
}


int main () {
  int t;
  cin>>t;
  for(int i=1; i<=t; i++){
    solve();
  }
  return 0;
}
