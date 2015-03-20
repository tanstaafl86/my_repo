#include <stdio.h>
#define MAX 1000


int read_file(){
  FILE *ptr_file;
  char buf[MAX];
  int count=0;
  
  ptr_file=fopen("output.txt", "r");
  if (!ptr_file)
    return 1;
  
  while (fgets(buf,MAX, ptr_file)!=NULL){
    printf("%s", buf);
    if(buf == "a"){
      count++;
    }
      
  }
  fclose(ptr_file);
  printf("The # of a's is: %d", count);
  return 0;
}

int main(int argc, char *argv[]){
  read_file();
  
  return 0 ;
}
