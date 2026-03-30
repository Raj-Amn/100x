#include<iostream>
using namespace std; 

int main(){
  int n,q;
  cin>>n>>q;

  // input
  long long arr[n];
  for(int i=0; i<n; i++){
    cin>>arr[i];
  }

  // perfix array
  long long sum =0;

  long long prr[n];
  
  for(int i=0; i<n; i++){
    sum = sum + arr[i]*arr[i];
    prr[i] = sum;
  }


  // printing
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

