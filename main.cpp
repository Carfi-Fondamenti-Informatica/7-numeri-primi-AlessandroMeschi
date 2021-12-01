#include <iostream>
#include "lib.h
using namespace std;

int main(){
  int N=0, b=N-1;
  cin >> N;
  if(numeriprimi(N,b)==true){
    cout << "numero primo" <<endl;
  }else{
    cout << "numero non primo" <<endl;
  }
  return 0;
}
