#include<iostream>
#include<string>
using namespace std;
int main()
{
    string a;
    cin>>a;
    int i;
    int count1=0;
    int count2=0;
    for(int i=0; i<a.size() ;i++)
    {
        if(a[i]>='A' && a[i]<='Z')
            count1++;
        else count2++;
    }
    if(count1>count2)
    {
        for(int i=0; i<a.size() ;i++)
        {
            if(a[i]>='a' && a[i]<='z')
                a[i]-=32;
        }
    }
    else
    {
       for(int i=0; i<a.size() ;i++)
        {
            if(a[i]>='A' && a[i]<='Z')
                a[i]+=32;
        }
    }
    cout<<a;
}
