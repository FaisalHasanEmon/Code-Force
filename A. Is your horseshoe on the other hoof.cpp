
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a[4];
    int i,j;
    for(i=0;i<4;i++)
    {
        cin>>a[i];
    }


    for(i=0;i<4-1;i++)
    {
        for( j=i+1;j<4;j++)
        {
            if(a[i]>a[j])
            {
                int temp=a[j];
                a[j]=a[i];
                a[i]=temp;
            }
        }
    }
    int c=0;
    for(i=0;i<4;i++)
    {
       if(a[i]==a[i+1]) c+=1;
    }
    cout<<c<<endl;
}

