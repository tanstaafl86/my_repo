#include <stdio.h>

//This is a pointer refresher

int* generic_crap(){
  int n;
  int *p;
  n = 151;
  p = &n;
  return p;
}

int main(int argc, char *argv[]){
  //pointer is returned from function;
  printf("Print Address %p \n", generic_crap());
  printf("Print Value %d \n", *generic_crap());
  return 0;
}
