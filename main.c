#include <stdio.h>
#include <stdlib.h>
#define max 50
int comp=0,shift=0;
void sort(int a[],int n);
int main()
{
    int a[max],n,t;
    scanf("%d",&t);
    for(int i1=0;i1<t;i1++)
    {
        comp=0;
    scanf("%d",&n);
    printf("enter the values of array:");
    for(int i=0;i<n;i++)
        scanf("%d",&a[i]);

    sort(a,n);
    printf("printing the sorted array:");
    for(int i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
    printf("\ncomparison = %d\n",comp);
    printf("swaps = %d\n",shift);
    }
    return 0;
}

void sort(int a[],int n)
{
    int i,j,pos=0,min=0;
    for(i=0;i<n-1;i++)
    {
        min=a[i],pos=i;

        for(j=i+1;j<n;j++)
        {
            comp++;
            if(min>a[j])
            {
                min=a[j];
                pos=j;
            }
        }
            shift++;
            a[pos]=a[i];
            a[i]=min;
    }

}
