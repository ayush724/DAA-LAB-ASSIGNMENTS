
#include <stdio.h>
#include <stdlib.h>
#define MAX 50
int count=0;
int BinarySearch(int [],int ,int ,int );
int main()
{
    int n,a[MAX],k,x;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
        scanf("%d",&a[i]);

    printf("enter the key:");
    scanf("%d",&k);

    x=BinarySearch(a,0,n-1,k);
   // printf("mid =%d\n",x);
    if(a[x]==k)
   printf("key found \n comparison = %d",count);
    else
        printf("key not found comparison = %d",count);
    return 0;
}

int BinarySearch(int a[],int l,int r,int k)
{
    if(r>=l)
    {
        int mid=l+(r-l)/2;
        count++;
        if(a[mid]==k){
           return mid;
        }

        if(a[mid]>k)
        {
            //count++;
            return BinarySearch(a,l,mid-1,k);
        }

        if(a[mid]<k)
        {
            //count++;
            return BinarySearch(a,mid+1,r,k);
        }
    }
    return -1;
}

