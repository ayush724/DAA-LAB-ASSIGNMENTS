#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void count_sort(int a[],int );
int main()
{
    int a[50],n,t,k;
    scanf("%d",&t);
    for(int i1=0;i1<t;i1++)
    {
    scanf("%d",&n);
    for(int i=0;i<n;i++)
        scanf("%d",&a[i]);

    scanf("%d",&k);
    count_sort(a,n);

    int x=1;
    for(int i=0;i<n;i++)
    {
        if(x==k)
           {
            printf("%d th smallest element = %d\n",k,a[i]);
            break;
           }
        else
            x++;
    }
    if(x==n)
        printf("%d th smallest element not found\n");
    }
    return 0;
}

void count_sort(int a[],int n)
{
    int range=a[0];
    for(int i=0;i<n;i++)
    {
        if(range<a[i])
            range=a[i];
    }
    //printf("%d",range);
   int count[range + 1];
    memset(count, 0, sizeof(count));
    int output[n];
    for(int i=0;i<n;i++)
    {
        ++count[a[i]];
    }

    for(int i=1;i<=range;i++)
    {
        count[i]=count[i]+count[i-1];
    }

    for(int i=0;i<n;i++)
    {
        output[count[a[i]]-1] = a[i];
        --count[a[i]];
    }
    for(int i=0;i<n;i++)
    {
        a[i] = output[i];
    }
}
