#include "lib.h"
bool numeriprimi (int N, int a){
  if(N<0){
    return false;
  }else if(N==1){
    return true;
  }else if(a==1){
    return true;
  }else if(N%a==0){
    return false;
  }
  numeriprimi(n,--a);
}
  

