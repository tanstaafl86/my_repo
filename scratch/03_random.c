#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void get_random(){
  srand(time(NULL));
  for(int i = 1; i <= 5; i++){
    int r = rand() % 100 + 1;
    int prev_rand = rand();
    if (r == prev_rand){  
      i--;
    } else {
      printf("%d, ", r);
    }
  }
  printf("\n\n");
}


int main(int argc, char *argv[]){
  printf("\nPress Enter to get 5 random numbers: \n");
  getchar();
  get_random();
}
