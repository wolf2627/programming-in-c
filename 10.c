#include<stdio.h>

#define size 100

struct employee{
    int empid;
    char empname[50];
    int bs,ha,ta,da,net;
}e[size];

int main()
{
    int i,n;
    printf("Enter the total number of employess: ");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("Enter emplyee %d details\n",i+1);
        printf("EMP ID: ");
        scanf("%d",&e[i].empid);
        printf("EMPLOYEE NAME : ");
        scanf(" %s",e[i].empname);
        printf("BASIC SALARY: ");
        scanf("%d",&e[i].bs);
        printf("HA: ");
        scanf("%d",&e[i].ha);
        printf("TA: ");
        scanf("%d",&e[i].ta);
        e[i].net = e[i].bs+e[i].ha+e[i].ha;
    }
    printf("\n\n-------------------------------------\n");
    printf("ID\t\tNAME\t\tNET SALARY\n");
    printf("------------------------------------------\n");
    for(i=0;i<n;i++)
    {
        printf("%d\t\t%s\t\t%d\n",e[i].empid,e[i].empname,e[i].net);
    }
    return 0;
}