#include<iostream>
using namespace std;

void solve(){
  string s;
  cin>>s;

  int size = s.size();
  int i = 0;

  while(i<size){
    int j = i;
    int count = 0;

    while(s[i] == s[j]){
      count++;
      j++;
    }

    cout<<s[i];
    if(count>1){
      cout<<count;
    }
    i = j;
  }
  cout<<endl;

}

int main(){
  int n;
  cin>>n;

  for(int i=0; i<n; i++){
    solve();
  }

}
