#include<stdio.h>

#define size 100

char grade(int mark);

struct student{
    int rollno,mark,tm,em,mm,sm,ssm;
    char name[50];
    char grade;
}s[size];

int main()
{
    int i,n;
    printf("Enter total number of students: ");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("Enter student %d details:-",i+1);
        printf("ROLL NO : ");
        scanf("%d",&s[i].rollno);
        printf("NAME : ");
        scanf("%s",s[i].name);
        printf("Enter the subject marks\n");
        printf("TAMIL :");
        scanf("%d",&s[i].tm);
        printf("ENGLISH : ");
        scanf("%d",&s[i].em);
        printf("MATHS : ");
        scanf("%d",&s[i].mm);
        printf("SCIENCE : ");
        scanf("%d",&s[i].sm);
        printf("SOCIAL SCIENCE : ");
        scanf("%d",&s[i].ssm);
        s[i].mark = s[i].tm + s[i].em + s[i].mm + s[i].sm + s[i].ssm; 
        s[i].grade = grade(s[i].mark);

    }
    for(i=0;i<n;i++)
    {
        printf("\n---------------------------------------\n");
        printf("\t\tMARKSHEET\n");
        printf("\n---------------------------------------\n");
        printf("rollno : %d\n",s[i].rollno);
        printf("NAME : %s\n",s[i].name);
        printf("TAMIL\t\t\t%d\n",s[i].tm);
        printf("ENGLISH\t\t\t%d\n",s[i].em);
        printf("MATHS\t\t\t%d\n",s[i].mm);
        printf("SCIENCE\t\t\t%d\n",s[i].sm);
        printf("SOCIAL SCIENCE\t\t%d\n",s[i].ssm);
        printf("\n---------------------------------------\n");
        printf("TOTAL : %d\t\t\tGRADE : %c\n",s[i].mark,s[i].grade);
        printf("\n---------------------------------------\n");

    }
}

char grade(int mark)
{
    if(mark<501)
    if(mark<=500 &&  mark>450)
        return 'O';
    else if(mark<=450 &&  mark>400)
        return 'A';
    else if(mark<=400 &&  mark>350)
        return 'B';
    else if(mark<=350 &&  mark>250)
        return 'C';
    else
        return 'F';
    
}
