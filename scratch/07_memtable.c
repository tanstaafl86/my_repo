#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef enum {false=0, true=1} bool;

char* my_scan(){
  char *input;
  input = malloc( 200 * sizeof(char) );
  scanf("%[^\n]", input);
  return input;
}

void print_something(char* input){
  int total = 0;
  char* temp = input;
  printf("=================================\n");
  printf("| Characters | Bytes | Address \n");
  for(; *temp != '\0' ; ++temp){	
	printf("|\t%c => | %3d   | %p   \n",*temp, *temp, temp);
    total += *temp;
  }
  printf("=================================\n");
  printf("Original String: '%s'\n", input);
  printf("Total Bytes Used: %d\n", total);
}

int main(int argc, char *argv[]){
  char *temp;
  printf("Please enter a string of characters: ");
  temp = my_scan();
  print_something(temp);
  free(temp);
  return 0;
}
