#include <stdio.h>

int cards[0];


void generate_array(){
  int i = 1;
  printf("|");
  for(i = 1; i <=52; i++){
    cards[i]= i;
    printf(" %d |", cards[i]);
  }
  printf("\n");
}

void swap (int *a, int *b){
  int temp = *a;
  *a = *b;
  *b = temp;
}

void shuffle_array(int cards[]){
  srand(time(NULL));
  for(i = 1; i < 52; i++){
    int j = rand() % (i+1);
    swap(&arr[i], &arr[j]);
}

int main(int argc, char *argv[]){
  printf("\nGeneric Header\n");
  generate_array();
  printf("\n");
  return 0;
}
