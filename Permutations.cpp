#include<bits/stdc++.h>
using namespace std;


int main(){

  int n; cin>>n;
  if(n==1){
    cout<<n<<endl;
    return 0;
  }
  if(n<=3){
    cout<<"NO SOLUTION"<<endl;
    return 0;
  }else{

    for(int i = 1;i<=n;i++){
      if(i%2==0){
        cout<<i<<" ";
      }
    }

    for(int i = 1;i<=n;i++){
      if(i%2!=0){
        cout<<i<<" ";
      }
    }

  }


  return 0;
}
