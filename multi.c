// program to add 2 numbers (Variables/Data types)
#include<stdio.h> //scanf(), printf()
int main () {
    int a , b, mul; // dec and initialization
    
    printf("Enter the first number ");
    scanf("%d",&a);
    
    printf("Enter the 2nd number: ");
    scanf("%d",&b);
    mul = a * b;
    printf("The sum of a and b is %d", mul);
 
  return 0;
}