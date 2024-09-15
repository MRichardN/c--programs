// program to add 2 numbers (Variables/Data types)
//making changes
#include<stdio.h> //scanf(), printf()
int main () {
    int a , b, sum; // dec and initialization

    printf("Enter the first number ");
    scanf("%d",&a);

    printf("Enter the 2nd number: ");
    scanf("%d",&b);
    sum = a + b;
    printf("The sum of a and b is %d", sum);

  return 0;
}
