//Program to check eligibility
#include<stdio.h> // printf(),scanf()
int main () {
int age;
printf("Enter your age: ");
scanf("%d ", &age);
if (age >18)
    printf(" You are eligible to vote");

else
    printf("You are NOT eligible to vote");


return 0;
}
