
#include<iostream>
#include<vector>
using namespace std;

int main(){
  int n;
  cin>>n;

  vector<long long>arr(n);

  //take input
  for(int i=0; i<n; i++){
    cin>>arr[i];
  }

  //prefix sum
  vector<long long>prr(n);
  long long sum = 0;
  for(int i=0; i<n; i++){
    if((i+1)%2==0){
      sum = sum + arr[i];
      prr[i] = sum;
    }else{
      prr[i] = 0;
    }
  }

  //test

  int q;
  cin>>q;

  while(q--){

    int l,r;
    cin>>l>>r;

    l--;r--;

    if(l==0){
      cout<<prr[r]<<endl;
    }else{
      cout<<prr[r]-prr[l-1]<<endl;
    }
  }
}
