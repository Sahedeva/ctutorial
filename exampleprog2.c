#include <stdio.h>

int main(){

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

  num1 = 1, num2 = 1;

  printf("Is 1 >= 1 : %d\n\n", num1 >= num2);

  if(num1 >= num2){

      printf("%d is greater than or equal to %d\n\n", num1, num2);

  } else if(num1 < num2) {

      printf("%d is less than %d\n\n", num1, num2);

  } else {

      // note: this does not get hit
      // once a condition is true the code exits the if block

      printf("%d is equal to %d\n\n", num1, num2);

  }

  // logical operators: && - and, || - or, ! - not

  int custAge = 38;

  printf("Customer is %d years old!\n\n", custAge);

  if(custAge > 21 && custAge <35) printf("They are welcome to the club\n\n");
  else printf("They are not welcome to the club\n\n");

  printf("! turns a true into a false (!1) : %d or a false into a true (!0) : %d\n\n", !1, !0 );

  // missed less than 10 days work AND
  // has over 30,000 salses OR
  // signed up more than 30 new customers

  int bobMissedDays = 8, bobTotalSales = 24000, bobNewCust = 32;

  if(bobMissedDays < 10 && (bobTotalSales >30000 || bobNewCust > 30)){

    printf("Bob gets a raise!\n\n");

  } else {

    printf(":( No raise for Bob!\n\n");

  }

  char* legalAge = (custAge > 21) ? "true" : "false";

  printf("Is the customer of legal age? %s\n\n", legalAge);

  int numOfProducts = 10;

  printf("I bought %s products\n\n", (numOfProducts >1) ? "many" : "one");

  printf("A char takes up %lu bytes\n\n", sizeof(char));
  printf("A int takes up %lu bytes\n\n", sizeof(int));
  printf("A long int takes up %lu bytes\n\n", sizeof(long int));
  printf("A float takes up %lu bytes\n\n", sizeof(float));
  printf("A double takes up %lu bytes\n\n", sizeof(double));

  /*  1 byte is 8 bits
      00000000 = 0
      00000001 = 1
      00000010 = 2
      00000011 = 3
      00000100 = 4
      11111111 = 255

      0   0   0   0   0   0   0   0

      128 64  32  16  8   4   2   1


      4 bytes (int size) is 32 boxes which is 4,294,967,295
      or Max Value of 2,147,483,647
      and a Min Value of -2,147,483,647
  */

  int bigInt = 2147483648;

  printf("I'm bigger than you may have heard %d\n\n", bigInt);

  // note: number flips around to max negative

  int numberHowBig = 0;

  printf("How many Bits? ");
  scanf(" %d", &numberHowBig);
  printf("\n");

  // 0 : Print what is given
  // 1 : Print what is given
  // 2 : 1 + 2 = 3 (11 in binary)
  // 3 : 3 + 4 = 7 (111 in binary)
  // 4 : 7 + 8 = 15 (1111 in binary)

  int myIncrementer = 1, myMultiplier = 1, finalValue = 1;
  printf("myMultiplier: %d, myIncrementer: %d, finalValue: %d\n", myMultiplier, myIncrementer, finalValue);

  while(myIncrementer < numberHowBig){

    myMultiplier *= 2;
    finalValue = finalValue + myMultiplier;
    printf("myMultiplier: %d, myIncrementer: %d, finalValue: %d\n", myMultiplier, myIncrementer, finalValue);
    myIncrementer++;

  }

  if((numberHowBig == 0) || (numberHowBig == 1)){
    printf("Top Value: %d\n\n", numberHowBig);
  } else {
    printf("Top Value: %d\n\n", finalValue);
  }

  int secretNumber = 10, numberGuessed = 0;

  while(1){

    printf("Guess My Secret Number: ");
    scanf(" %d", &numberGuessed);

    if(numberGuessed == secretNumber){
      printf("You got It!\n\n");
      break;
    }
  }

  char sizeOfShirt;

  do {
    printf("What Size of Shirt (S, M, L): ");
    scanf(" %c", &sizeOfShirt);
  } while(sizeOfShirt != 'S' && sizeOfShirt != 'M' &&sizeOfShirt != 'L');

  printf("You will receive a %c shirt!\n\n", sizeOfShirt);

  for (int counter = 0; counter <= 20; counter++) {

    printf("%d ", counter);

  }

  printf("\n\n");

  for (int counter2 = 0; counter2 <= 40; counter2++) {

    if((counter2 % 2) == 0) continue;

    printf("%d ", counter2);

  }

  printf("\n\n");
}
