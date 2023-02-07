#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n=10;
    int a[n];
    int i=0;
    while(i%3!=0 and i%10!=3 and i<10)
    {
        a[i]=i;
    }
    for(int j=0;j<10;j++)
    {
        cout<<a[j]<<" ";
    }
}
