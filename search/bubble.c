#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//left this in incase i want a boolean
//typedef enum {false=0, true=1} bool;

int my_scan1(){
  int n;
  printf("Please enter number of elements: \n ");
  scanf("%d", &n);
  return n;
}

int *my_scan2(int n){
  int i;
  int *array = malloc(n * sizeof(int));
  if (!array){
    return NULL;
  }
  printf("Enter %d integers, press enter after each number\n", n);
  for (i = 0; i < n; i++){
    scanf("%d", &array[i]);
  }
  return array;
}

int *bubble_sort(int array[], int n){
  int x, y, temp;
  for (x = 0; x < (n - 1); x++){
    for (y = 0; y < (n - x - 1); y++){
      if(array[y] > array[y +1]){
	temp = array[y];
	array[y] = array[y+1];
	array[y+1] = temp;
      }
    }
  }
  return array;
}

void print_array(int array[], int n){
  printf("\nPrint numbers in ascending sorted: \n");
  for(int i = 0; i < n; i++){
    printf("%d\n", array[i]);
  }
  printf("\n");
}

int main(int argc, char *argv[]){
  int* temp1;
  int* temp2;
  int n;
  n = my_scan1();
  temp1 = my_scan2(n);
  temp2 = bubble_sort(temp1, n);
  print_array(temp2, n);
  free(temp1);
  return 0;
}
