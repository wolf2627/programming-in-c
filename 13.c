#include<stdio.h>
#include<stdlib.h>

int main()
{
    FILE *f1,*f2;
    char n1[30],n2[30],ch;
    int i;
    printf("Enter the source file :");
    scanf("%s",n1);
    f1 =fopen(n1,"r");
    if(f1==NULL)
    {
        printf("Error loading the source file\n");
        exit(0);
    }
    printf("Enter the destination file : ");
    scanf("%s",n2);
    f2 = fopen(n2,"w");
    if(f2==NULL)
    {
        printf("Error loading destination file");
        exit(0);
    }
    ch=fgetc(f1);
    while(ch!=EOF)
    {
        fputc(ch,f2);
        ch = fgetc(f1);
    }
    printf("Operation completed...\n");
    
}
