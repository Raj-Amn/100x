#include<iostream>
using namespace std;

int main(){
  int n,q,k;
  cin>>n>>q>>k;

  long long arr[n];
  for(int i=0; i<n; i++){
    cin>>arr[i];
  }

  int count = 0;
  int prr[n];
  for(int i=0; i<n; i++){
    long long num = arr[i];
    int sum = 0;
    while(num>0){
      sum += num%10;
      num = num/10;
    }
    if(sum==k){
      count++;
    }
    prr[i] = count;
  }

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
