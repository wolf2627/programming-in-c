#include<stdio.h>

void printing(int m[10][10],int r, int c);

int main()
{
    int a[10][10],b[10][10],sum[10][10],i,j,k,r1,c1,r2,c2;
    printf("Enter row and column of the first matrix(A): ");
    scanf("%d%d",&r1,&c1);
    printf("Enter the row and column of the second matrix(B): ");
    scanf("%d%d",&r2,&c2);
    if(c1==r2)
    {
        printf("Enter the elements of the first matrix: ");
        for(i=0;i<r1;i++)
            for(j=0;j<c1;j++)
                scanf("%d",&a[i][j]);
        printing(a,r1,c1);
        printf("Enter the elements of the second matrix: ");
        for(i=0;i<r2;i++)
            for(j=0;j<c2;j++)
                scanf("%d",&b[i][j]);
        printing(b,r2,c2);
        for(i=0;i<r1;i++)
        {
            for(j=0;j<c2;j++)
            {
                sum[i][j]=0;
                for(k =0 ; k < c1 ;k++)
                    sum[i][j]+=a[i][k]*b[k][j];
            }
        }
        printf("The product of the given matrices \n");
        for(i=0;i<r1;i++){
            for(j=0;j<c2;j++)
                printf("%d\t",sum[i][j]);
            printf("\n");
        }
        
    }
    else 
     printf("we can't multiply to the matices with these dimensions\n");
}

void printing(int m[10][10],int r, int c)
{
    int i,j;
    for(i=0;i<r;i++){
        for(j=0;j<c;j++)
            printf("%d\t",m[i][j]);
        printf("\n");
    }
}