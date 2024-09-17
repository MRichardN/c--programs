// Program to calculate Simple Interest
#include <stdio.h>

int main() {
    int principle_amount, time, rate, simple_interest;
    
    printf("Enter principle amount: ");
    scanf("%d",&principle_amount);
    
   printf("Enter time: ");
   scanf("%d",&time);
    
    printf("Enter rate: ");
    scanf("%d",&rate);
    
    //printf("Enter Principle amount, time and rate: ");
    //scanf("%d%d%d",&principle_amount, &time, &rate);
    simple_interest = (principle_amount * time * rate)/100;
    
    printf("The simple interest is %d", simple_interest);

    return 0;
}