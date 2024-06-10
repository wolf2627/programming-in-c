#include<stdio.h>
void binsearch(int [],int , int , int);

int main()
{
    int a[10],n,k,i;
    printf("Total number of elements : ");
    scanf("%d",&n);
    printf("Enter the elements of array:");
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    printf("Enter the searching element: ");
    scanf("%d",&k);
    binsearch(a,0,n-1,k);
}

void binsearch(int b[],int low,int high,int k){
    int mid;
    if(low>high)
        return ;
    mid = (low+high)/2;
    if(b[mid]==k){
        printf("The element found at position %d\n",mid+1);
        return;
    }
    else if(b[mid]>k)
        binsearch(b,low,mid-1,k);
    else if(b[mid]<k)
        binsearch(b,mid+1,high,k);
        
}