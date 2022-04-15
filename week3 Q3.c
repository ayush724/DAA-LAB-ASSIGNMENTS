
#include <stdio.h>
#include <stdlib.h>
#define max 50
void quick_sort(int a[],int ,int);
int main()
{
    int a[max],n,x=0,t;
    scanf("%d",&t);
    for(int i1=0;i1<t;i1++)
    {
    int lb=0;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
        scanf("%d",&a[i]);

    quick_sort(a,lb,n-1);
    for(int i=1;i<n-1;i++)
    {
        if(a[i]==a[i+1])
        {
            printf("YES\n");
            x=1;
            break;
        }
    }
    if(x==0)
        printf("NO\n");
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
