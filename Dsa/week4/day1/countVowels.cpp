#include<iostream>
using namespace std;

int main(){

  int n;
  cin>>n;

  char s[n];

  // taking input
  for(int i=0; i<n; i++){
    cin>>s[i];
  }

  int arr[n];

  // contribution array
  for(int i=0; i<n; i++){
    if(s[i]=='a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u' ){
      arr[i] = 1;
    }else{
      arr[i] = 0;
    }
  }

  // prfix array
  int prr[n];
  int sum = 0;
  for(int i=0; i<n; i++){
    sum+= arr[i];
    prr[i] = sum;
  }

  int q;
  cin>>q;

  while(q--){
    int l,r;
    cin>>l>>r;
    l--,r--;

    if(l==0){
      cout<<prr[r];
    }else{
      cout<<prr[r]-prr[l-1];
    }
    cout<<endl;
  }

}
