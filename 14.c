#include<stdio.h>

int main()
{
    FILE *fp;
    int i;
    char ch;
    fp = fopen("apl.txt","w+");
    for(i=0;i<26;i++)
        fputc(i+'A',fp);
    for(i=0;i<26;i++){
        fseek(fp,i,SEEK_SET);
        printf("%c",fgetc(fp));
    }
    printf("\n");  
    fclose(fp);  
    return 0;

}
