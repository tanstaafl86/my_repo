#include <stdio.h>

int n, count, total;

void print_primes(int n){
  count = 0;
  total = 0;
  for(int i=2; i<n; i++){
    for(int j=2; j<i; j++){
      if(i % j == 0){
	  break;
      }else if (i == j + 1){
	  printf("%d \n", i);
	  count = count + 1;
	  total = total + i;
      }
    }
  }
}

void print_totals(){
  printf("\nYou selected %d", n);
  printf("\nPrime numbers in sequence: %d",count);
  printf("\nSummation of primes in sequence: %d\n\n", total);
}

int main(){
  printf("\nPlease enter the ceiling you want to \n");
  printf("calculate primes to: \n");
  scanf("%d", &n);
  print_primes(n);
  print_totals();
  return 0;
}
