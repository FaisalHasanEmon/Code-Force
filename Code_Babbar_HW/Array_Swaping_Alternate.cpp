#include<bits/stdc++.h>
using namespace std;

void print(int a[],int s)
{
    for(int i = 0 ; i<s ; i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<endl;

}

void swapAlternat(int a[],int s)
{
    for(int i = 0 ; i < s ; i+=2)
    {
        if(i+1<s)
        {
            swap(a[i],a[i+1]);
        }
    }
    print(a,s);
}

int main()
{
    int ar[5]={1,2,3,4,5};
    int ar1[6]={1,2,3,4,5,6};
    swapAlternat(ar,5);
    swapAlternat(ar1,6);
}