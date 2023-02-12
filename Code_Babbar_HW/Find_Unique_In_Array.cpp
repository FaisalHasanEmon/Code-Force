#include<bits/stdc++.h>
using namespace std;
int main()
{
   int t;
   cin>>t;
   while(t--)
   {
        int size;
        cin>>size;
        int a[size+1];
        int unique = 0;
        for(int i = 0 ; i < size ;i++)
        {
            cin>>a[i];
        }
        for(int i = 0 ; i < size ;i++)
        {
            unique = unique^a[i];
        }
        cout<<unique<<endl;
   }
   
}