#include <stdio.h>
#include <stdlib.h>
#define max 50
int comp,swaps;
void quick_sort(int a[],int ,int);
int main()
{
    int a[max],n,t;
    scanf("%d",&t);
    for(int i1=0;i1<t;i1++)
    {
        comp=0;swaps=0;
    int lb=0;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
        scanf("%d",&a[i]);

    quick_sort(a,lb,n-1);

    for(int i=0;i<n;i++)
        printf("%d ",a[i]);
    printf("\ncomparisons = %d\n",comp);
    printf("swaps = %d\n",swaps);
    }
    return 0;
}

void quick_sort(int a[],int lb,int ub)
{
    int i=lb,j=ub,t=0;
    int key=a[lb];
    if(lb>ub)
        return;
    while(i<j)
    {
        while((key>=a[i])&&(i<j))
       {
           comp++;
           i++;
       }

        while(key<a[j])
           {
               comp++;
              j--;
           }

        if(i<j)
        {
            swaps++;
            t=a[j];
            a[j]=a[i];
            a[i]=t;
        }
    }
    swaps++;
         a[lb]=a[j];
        a[j]=key;
    quick_sort(a,lb,j-1);
    quick_sort(a,j+1,ub);
}

