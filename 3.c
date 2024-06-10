#include<stdio.h>
#include<stdlib.h>

int main()
{
    int choice,a,b;
    while(1){
    printf("which operation do you to perform ?\n");
    printf("1 -> Addition\n2 -> Subtraction\n3 -> Mulitiplication\n4 -> Quotient\n5 -> Reminder\n0 ->exit\n");
    scanf("%d",&choice);
    switch (choice)
    {
    case 1:
        printf("ADDING TWO NUMBERS\n");
        printf("Enter two number to add: ");
        scanf("%d%d",&a,&b);
        printf("The summation of %d adn %d is %d\n",a,b,a+b);
        break;
    case 2:
        printf("SUbtraction of two numbers\n");
        printf("Enter two numbers to perform operations:");
        scanf("%d%d",&a,&b);
        printf("Difference of %d and %d is %d",a,b,a-b);
        break;
    case 3:
        printf("Multiplication of two numbers\n");
        printf("Enter two number to multiply: ");
        scanf("%d%d",&a,&b);
        printf("The product of %d and %d is %d\n",a,b,a*b);
        break;
    case 4:
        printf("FINDING QUOTIENT\n");
        printf("Enter numerator: ");
        scanf("%d",&a);
        printf("Enter denominator: ");
        scanf("%d",&b);
        printf("The quotient when %d is divided by %d is %f",a,b,(float)a/(float)b);
        break;
    case 5:
        printf("FINDING REMINDER\n");
        printf("Enter numerator: ");
        scanf("%d",&a);
        printf("Enter denominator: ");
        scanf("%d",&b);
        printf("The reminder when %d is divided by %d is %d\n",a,b,a%b);
        break;
    case 0:
        exit(0);
    default:
        printf("Enter valid option....\n");
        break;
    }
    }
}