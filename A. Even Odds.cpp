#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k,i,ar[5000];
    int x[100],y[100];
    cin>>n;
    for(i=0;i<n;i++)
    {
        ar[n]=i+1;
        if(ar[n]%2!=0)
        {
           x[i]=ar[n];
           continue;
        }
        else if (ar[n]%2==0)
        {
            y[i]=ar[n];
            continue;
        }
        cout<<x[i]<<" ";
        cout<<y[i]<<" ";

    }

}
