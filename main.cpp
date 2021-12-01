#include <iostream>
#include "lib.h"
using namespace std;

int main(){
  int N=0;
  cin >> N;
  if(numeriprimi(N, N-1)){
    cout << "numero primo";
  }else{
    cout << "numero non primo";
  }
  return 0;
}
