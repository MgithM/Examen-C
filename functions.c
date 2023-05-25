#include <stdio.h>
#include <string.h>
#include "functions.h"

void welcomeMessage() {
    printf("Welcome to our C program!\n");
}

void addTwoNumbers() {
    int num1, num2;
    printf("Enter two integers: ");
    scanf("%d %d", &num1, &num2);

    int sum = num1 + num2;
    printf("The sum of %d and %d is: %d\n", num1, num2, sum);
}

void displayArray() {
    float arr[5] = { 1.2, 3.4, 5.6, 7.8, 9.0 };
    printf("Array of floating-point numbers:\n");
    for (int i = 0; i < 5; i++) {
        printf("%.2f ", arr[i]);
    }
    printf("\n");
}

void enterName() {
    char name[20];
    printf("Enter your name: ");
    scanf("%s", name);

    printf("Hello, %s!\n", name);
}

void checkEvenOdd() {
    int number;
    printf("Enter a number: ");
    scanf("%d", &number);

    if (number % 2 == 0) {
        printf("%d is an even number.\n", number);
    } else {
        printf("%d is an odd number.\n", number);
    }
}

void displayMultiples() {
    int number;
    printf("Enter an integer number: ");
    scanf("%d", &number);

    printf("Multiples of %d from 1 to 10 are: ", number);
    for (int i = 1; i <= 10; i++) {
        printf("%d ", number * i);
    }
    printf("\n");
}

void calculateAverage() {
    int total = 0;
    int number, i;
    float average;

    printf("Enter 5 integer numbers:\n");
    for (i = 0; i < 5; i++) {
        scanf("%d", &number);
        total += number;
    }

    average = (float)total / 5;
    printf("The average of the entered numbers is: %.2f\n", average);
}

void displaySquare() {
    int number;
    printf("Enter an integer number: ");
    scanf("%d", &number);

    int square = number * number;
    printf("The square of %d is: %d\n", number, square);
}

void reverseString() {
    char str[50];
    printf("Enter a string: ");
    scanf("%s", str);

    printf("The reversed string is: ");
    for (int i = strlen(str) - 1; i >= 0; i--) {
        printf("%c", str[i]);
    }
    printf("\n");
}

void compareStrings() {
    char str1[50], str2[50];
    printf("Enter two strings: ");
    scanf("%s %s", str1, str2);

    int result = strcmp(str1, str2);
    if (result == 0) {
        printf("The strings are identical.\n");
    } else {
        printf("The strings are different.\n");
    }
}
