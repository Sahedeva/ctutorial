#include <stdio.h>

main(){

  // relational operators: <,>,<=,>=,==,!=
  // you will get returned an int 1 if true and 0 if false

  int num1 = 1, num2 =2;

  printf("Is 1 > 2 : %d\n\n", num1 > num2);

  if(num1 > num2){

      printf("%d is greater than %d\n\n", num1, num2);

  } else if(num1 < num2) {

      printf("%d is less than %d\n\n", num1, num2);

  } else {

      printf("%d is equal to %d\n\n", num1, num2);

  }

}
