#include <stdio.h>
#include <stdlib.h>
#define MAX 50
int main()
{
    int t,n,a[MAX],k,count=0;
    scanf("%d",&t);
    for(int i1=0;i1<t;i1++)
    {
        int count=0;
        scanf("%d",&n);
        for(int i=0;i<n;i++)
        {
            scanf("%d",&a[i]);
        }
        fflush(stdin);
        printf("enter the key: ");
        scanf("%d",&k);
        for(int i=0;i<n-1;i++)
        {
            for(int j=i+1;j<n;j++)
            {
                if((a[i]-a[j])==k||(a[j]-a[i])==k)
                    count++;
            }
        }
        printf("%d\n",count);
    }
    return 0;
}
