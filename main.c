#include <stdio.h>
#include <stdlib.h>
void sort(int a[],int n);
int comp,shift;
#define max 50
int main()
{
    int a[max],n,t;
    scanf("%d",&t);
    for(int i1=0;i1<t;i1++)
    {
    scanf("%d",&n);
    for(int i=0;i<n;i++)
        scanf("%d",&a[i]);

    sort(a,n);
    printf("printing the sorted array:");
    for(int i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
    printf("\ncomparison = %d\n",comp);
    printf("shift = %d",shift);
    }
    return 0;
}

void sort(int a[],int n)
{
    int i,j,t;
    for(i=1;i<n;i++)
    {
        t=a[i];
        j=i-1;
    while(j>=0&&t<a[j])
    {
        a[j+1]=a[j];
        comp++;
        shift++;
        j--;
    }
    a[j+1]=t;
    shift++;
    }
}

