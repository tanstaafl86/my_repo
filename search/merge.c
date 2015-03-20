#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int my_scan1(){
  int n;
  printf("How many elements in your array?\n");
  scanf("%d", &n);
  return n;
}

int *my_scan2(int n){
  int i;
  int *array = malloc(n * sizeof(int));
  if(array == NULL){
    return NULL;
  }
  printf("Enter %d integers, press enter after each number\n", n);
  for(i = 0; i < n; i++){
    scanf("%d", &array[i]);
  }
  return array;
}

//This is not my method
void merge(int *array, int n, int m){
  int i, j, k;
  int *x = malloc(n *sizeof (int));
  for(i = 0, j = m, k = 0; k < n; k++){
    x[k] = j == n   ? array[i++]
      : i == m      ? array[j++]
      : array[j] < array[i] ? array[j++]
      :               array[i++];
  }
  for (i = 0; i < n; i++) {
    array[i] = x[i];
  }
  free(x);
}

//This is not my method
int *merge_sort(int *array, int n){
  if (n < 2){
    return array;
  }else{
  int m = n / 2;
  merge_sort(array, m);
  merge_sort(array + m, n - m);
  merge(array, n, m);
  }
  return array;
}

void print_array(int *array, int n){
  printf("\nPrint numbers in ascending sorted: \n");
  for(int i = 0; i < n; i++){
    printf("%d\n", array[i]);
  }
    printf("\n");
}

int main(int argc, char *argv[]){
  int *temp1;
  int n;
  n = my_scan1();
  temp1 = my_scan2(n);
  temp1 = merge_sort(temp1, n);
  print_array(temp1, n);
  free(temp1);  
  return 0;
}
