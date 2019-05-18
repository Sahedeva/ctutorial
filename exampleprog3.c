#include <stdio.h>

// Needed for exit()
#include <stdlib.h>

int main(){

  printf("This is third tutorial code.\n\n");

  int whatToDo = 0;

  do {
    printf("\n");
    printf("1. What time is it?\n");
    printf("2. What is today's date?\n");
    printf("3. What day is it?\n");
    printf("4. Quit\n");

    scanf(" %d", &whatToDo);

  } while(whatToDo < 1 || whatToDo > 4);

  // if statement method - cumbersome
  /*
  if(whatToDo == 1){
    printf("Print the time\n");
  } else if(whatToDo == 2){
    printf("Print the date\n");
  } else if(whatToDo == 3){
    printf("Print the day\n");
  } else {
    printf("Bye bye!\n");
    exit(0);
  }
  */
  // switch statement way (better)
  switch (whatToDo) {
    case 1: printf("Print the time\n");
              break;
    case 2: printf("Print the date\n");
              break;
    case 3: printf("Print the day\n");
              break;
    default: printf("Bye bye\n");
              exit(0);
              break;
  }
}
