#include <stdio.h>
#include <stdlib.h>
#define MAX 50
int main()
{
    int n,t,a[MAX],c,k,c1;
    scanf("%d",&t);
    for(int i1=0;i1<t;i1++)
    {
        c=0,c1=0;
        scanf("%d",&n);
        for(int i=0;i<n;i++)
        {
            scanf("%d",&a[i]);
        }
        printf("enter the key:");
        scanf("%d",&k);
        for(int j=0;j<n;j++)
        {
            c++;
            if(a[j]==k)
            {
                c1=1;
                break;
            }
        }
        if(c1==0)
            printf("not present %d\n",c);
        else
            printf("present %d\n",c);
    }

    return 0;
}
