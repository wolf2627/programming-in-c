#include<stdio.h>

void search(int *a,int n,int k);

int main()
{
    int a[10],i,n,k;
    printf("Enter the total number of elements of array ");
    scanf("%d",&n);
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    printf("Enter the searching element: ");
    scanf("%d",&k);
    search(a,n,k);
    
}

void search(int *a, int n, int k)
{
    int i,flag = 0;
    for(i=0;i<n;i++){
        if(a[i]==k){
            flag = 1;
            break;
        }
    }
    if(flag)
     printf("Element found at position %d\n",i+1);
    else    
     printf("Element not found\n");
}