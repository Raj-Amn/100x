#include<iostream>
using namespace std;


long long solve(){
  int t;
  long long l,r;
  cin>>t;
  cin>>l>>r;

  if(l>r) return 0;

  long long diff = r-l;

  if(t==1) return max(0LL,diff-1);
  if(t==4) return max(0LL,diff+1);

  return max(0LL,diff);
}


int main(){

  int t;
  cin>>t;

  for(int i=0; i<t; i++){
    cout<<solve();
    cout<<endl;
  }


}
