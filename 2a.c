#include<stdio.h>

int main()
{
    int fact=1,i=1,n;
    printf("Enter the number to find the factorial: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
        fact = fact * i;
    printf("The factorial of %d is %d\n",n,fact);
    return 0;
    
}