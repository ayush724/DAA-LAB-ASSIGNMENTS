#include <stdio.h>
#include <stdlib.h>
#define MAX 50
int main()
{
    int t,a[MAX],n,x;
    scanf("%d",&t);

    for(int i=0;i<t;i++)
    {
        x=0;
        scanf("%d",&n);
        for(int i=0;i<n;i++)
            scanf("%d",&a[i]);

    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            for(int k=j+1;k<n;k++)
                 if((a[i]+a[j])==a[k])
            {
                printf("%d %d %d\n",i+1,j+1,k+1);
            }
            else
            {
                x=1;
            }
        }
    }
    if(x==1)
        printf("no sequence found\n");
    }
    return 0;
}
