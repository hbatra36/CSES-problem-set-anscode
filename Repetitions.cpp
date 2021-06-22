#include"bits/stdc++.h"
using namespace std;

int main(){

  string dna;

  getline(cin, dna);
  char c = 'A';
  int maxim = 0;
  int count = 0;
  for(auto curr : dna){
    if(curr == c){
      ++count;
      maxim = max(count, maxim);
    }else{
      c = curr;
      count = 1;
    }
  }
  cout<<maxim<<"\n";

  return 0;
}
