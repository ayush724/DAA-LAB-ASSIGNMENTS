#include <iostream>
#include<string.h>
using namespace std;

void count_sort(string arr)
{
    int n=arr.length();
    int temp[26]={0};
    for (int i=0;i<n;i++)
       temp[arr[i]-97]++;

    int maxi=0;
    char res='$';
    for (int i=0;i<26;i++)
    {
        if (temp[i]>maxi)
        {
            maxi=temp[i];
            res=i+97;
        }
    }
    if (maxi==1)
      cout<<"No Duplicate Found"<<endl;
     else
    cout<<res<<" - "<<maxi<<endl;

}

int main()
{

    int t;
    cin>>t;
    while (t--)
    {
        string arr;
        cout<<"enter the string:";
        cin>>arr;
        count_sort(arr);
    }
    return 0;
}
