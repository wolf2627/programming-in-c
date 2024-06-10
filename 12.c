#include<stdio.h>
#include<stdlib.h>

int main()
{
    FILE *fp;
    int i,len;
    char str[100],ch;
    fp = fopen("file.txt","w");
    printf("Enter the string to store in reverse order: ");
    scanf("%[^\n]s",str);
    fputs(str,fp);
    fclose(fp);
    fp = fopen("file.txt","r");
    if(fp==NULL)
    {
        printf("Error loading file\n");
        exit(0);
    }
    fseek(fp,0L,SEEK_END);
    len = ftell(fp);
    for(i=len-1;i>=0;i--)
    {
        fseek(fp,i,SEEK_SET);
        printf("%c",fgetc(fp));
    }
    printf("\n");
    fclose(fp);
}
