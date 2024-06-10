//call by reference

#include<stdio.h>

int swap(int *x, int *y);

int main()
{
    int a,b;
    printf("Enter the value of a and b : ");
    scanf("%d%d",&a,&b);
    printf("In main function \n a = %d,b = %d\n",a,b);
    swap(&a,&b);
    printf("Values after swapping in main function\na=%d,b=%d\n",a,b);
}

int swap(int *x, int *y)
{
    int t;
    t=*x;
    *x=*y;
    *y=t;
}
