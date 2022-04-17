#include <stdio.h>
#include <stdlib.h>
#define max 50
void find_duplicates(int [],int ,int );
void quick_sort(int [],int ,int);

int main()
{
    int a[max],n,t,k;
    scanf("%d",&t);
    for(int i1=0;i1<t;i1++)
    {
    int lb=0;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
        scanf("%d",&a[i]);

    scanf("%d",&k);
    quick_sort(a,lb,n-1);
    find_duplicates(a,n,k);
    }
    return 0;
}

void quick_sort(int a[],int lb,int ub)
{
    int i=lb,j=ub,key=a[lb],t=0;
    key=a[lb];
    if(lb>ub)
        return;
    while(i<j)
    {
        while((key>=a[i])&&(i<j))
            i++;

        while(key<a[j])
            j--;

        if(i<j)
        {
            t=a[j];
            a[j]=a[i];
            a[i]=t;
        }
    }
        a[lb]=a[j];
        a[j]=key;
    quick_sort(a,lb,j-1);
    quick_sort(a,j+1,ub);
}
void find_duplicates(int arr[],int n,int k)
{
    int flag=0;
    int i=0,j=n-1;
    while (i<j)
    {
        if (arr[i]+arr[j]==k)
        {
            flag=1;
            printf("%d + %d = %d\n",arr[i],arr[j],k);
            i++;j--;
        }
        else if (arr[i]+arr[j]<k)
           i++;
        else
           j--;
    }
    if (flag==0)
       printf("No such pair exist\n");
}
