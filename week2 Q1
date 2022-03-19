#include <stdio.h>
#include <stdlib.h>
#define MAX 50
int count=0;
int BinarySearch(int [],int ,int ,int );
int main()
{
    int t=0,n,a[MAX],k;
    scanf("%d",&t);
    for(int i=0;i<t;i++)
    {
        scanf("%d",&n);

        for(int i=0;i<n;i++)
        scanf("%d",&a[i]);
        printf("enter the key:");

        fflush(stdin);

        scanf("%d",&k);

    }
    BinarySearch(a,0,n-1,k);
    printf("%d-%d",k,count);
    return 0;
}

int BinarySearch(int a[],int l,int r,int k)
{
    if(r>=l)
    {
        int mid=(l+r)/2;

        if(a[mid]==k){
           int left=mid,right=mid+1;
           while(left>=0)
           {
               if(a[left]==k)
               count++;
               left--;
           }
           while(right<=r)
            {
                if(a[right]==k)
                    count++;
                right++;
            }
        }

        if(a[mid]>k)
            BinarySearch(a,l,mid-1,k);

        if(a[mid]<k)
            BinarySearch(a,mid+1,r,k);
    }
    return -1;
}

