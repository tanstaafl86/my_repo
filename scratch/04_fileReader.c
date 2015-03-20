#include <stdio.h>
#include <stdlib.h>

void readfile(){
  char str[70];
  FILE *p;
  if ((p=fopen("example02.txt", "r"))==NULL){
    printf("\nUnable to open file example02.txt");
    exit(1);
  }
  while(fgets(str,70,p) !=NULL){
    puts(str);
  }  
  fclose(p);
}


int main(int argc, char *argv[]){
  printf("\n");
  readfile();
  return 0;
}
