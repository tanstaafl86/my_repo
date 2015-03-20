#include <stdio.h>
#include <string.h>

// forward declarations
void print_letter(char str1[]);
char str1[60];

void print_letters(char str1[]){
  int count = strlen(str1); //string array length
  int total = 0;
  int i = 0;
  for(i = 0; i < count; i++){
    char ch = str1[i];
    printf(" Character: %c |\t Bytes: %d\n", ch, ch);
    total = ch + total;
  }
  printf("The total bytes of the String you entered is: %d", total);
}
  
  int main(int argc, char *argv[]){
  printf("\n\nPlease enter a character:\n");
  scanf("%[^\n]", str1); //scanner uses regex to ignore newlines.
  print_letters(str1);
  printf("\n\n\n");
  return 0;
}
