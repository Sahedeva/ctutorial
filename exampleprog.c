/* Multiline
Comment */

// Single line Comment

#include <stdio.h>
#include <string.h>

#define MYNAME "Bob Weilbaecher"

int globalVar = 100;

int main(){

    char firstLetter = 'B';
    int age = 49; // -32,768 to 32,678

    long int superBigNum = -327670000;

    float piValue = 3.14159; //38 decimal points in length

    double reallyBigPi = 3.1415914159141591415914159141591415914159;

    printf("\n"); // skips a line

    // \n \t - tab \\ to use the \ \" to use the "

    printf("This will print to screen\n\n");

    printf("I am %d years old\n\n", age);

    printf("Big Number %ld\n\n", superBigNum);

    printf("Pi = %.3f\n\n", piValue);

    printf("Big Pi %.15f\n\n", reallyBigPi);

    printf("The first letter in my name is %c\n\n", firstLetter);

    printf("My name is %s\n\n", "Bob");

    char myName[17] = "Bob Weilbaecher";

    // needs to include the string terminator \0

    printf("My name is %s\n\n", myName);

    strcpy(myName,"Don Juan");

    printf("My name is %s\n\n", myName);

    char middleInitial;

    printf("What is your middle initial? ");

    scanf (" %c", &middleInitial);

    printf("\nMiddle initial is %c\n\n", middleInitial);

    char firstName[30], lastName[30];

    printf("What is your name? ");

    scanf(" %s %s", firstName, lastName);

    printf("Your full name is %s %c %s\n\n", firstName, middleInitial, lastName);

    int month, day, year;

    printf("What's your birth day? ");

    scanf(" %d/%d/%d", &month, &day, &year);

    printf("\nYour birthday is %d/%d/%d\n\n", month, day, year);

    // +,-,*,/,#

    int num1 = 12, num2 = 15, numAns;

    float decimal1 = 1.2, decimal2 = 1.5, decimalAns;

    printf("Integer Calculation %d\n\n", num2 / num1);

    printf("Float Calculation %.4f\n\n", decimal2 / decimal1);

    printf("Modulus Calculation %d\n\n", num2 % num1);

    printf("Without parenthesis | 3 + 6 * 10 | %d\n\n", 3 + 6 * 10);

    printf("With parenthesis | (3 + 6) * 10 |%d\n\n", (3 + 6) * 10);

    int randomNum = 1;

    printf("1 += 2 : %d\n\n", randomNum += 2);

    printf("%d += 2 : %d\n\n", randomNum, randomNum += 2);

    // +=, -=, *=, /=, %=, varName--, varName++

    printf("randomNum = %d\n\n", randomNum);

    int exNum = 1;

    printf("++%d : %d\n\n", exNum, ++exNum);

    exNum = 1;

    printf("%d++ : %d\n\n", exNum, exNum++);

    exNum =1;

    printf("--%d : %d\n\n", exNum, --exNum);

    exNum = 1;

    printf("%d-- : %d\n\n", exNum, exNum--);

    int numberEx = 12;

    int numberEx2 = 14;

    printf("numberEx / numberEx2 : %d\n\n", numberEx / numberEx2);

    printf("(as float) numberEx / numberEx2 : %f\n\n", (float) numberEx / numberEx2);

}
