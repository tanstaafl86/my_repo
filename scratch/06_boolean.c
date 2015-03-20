#include <stdio.h>
/* this program showcases the different types of boolean conventions in C90, C99 built in standard of _bool */
typedef int bool;
#define false 0
#define true 1
/* OR
typedef enum { false = 0, true = 1 } bool;
both are accepted conventions in old C
*/
void my_function(){
  bool var1 = true;
  printf("Check out this gnarely type def, %d\n", var1);
  if(var1 == true){
    printf("Your statment is true\n");
  }else if (var1 == false){
    printf("Your statment is garbage\n");
  }
}
int main(int argc, char *argv[]){
  my_function();
return 0;
}
