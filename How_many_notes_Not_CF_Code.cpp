#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a;
    cin>>a;
    int bill_100 = 0, bill_50=0, bill_20=0, bill_10=0;
    switch (a>=100)
    {
    case 1:
        bill_100 = a/100;
        a = a-(bill_100*100);
    break; 

    }

    switch (a>=50)
    {
    case 1:
        bill_50 = a/50;
        a = a-(bill_50*50);
    break;
    }
    switch (a>=20)
    {
    case 1:
        bill_20 = a/20;
        a = a-(bill_20*20);
    break;
    }
    switch (a>=10)
    {
    case 1:
        bill_10 = a/10;
        a = a-(bill_10*10);
    break;
    }

    cout<<"100Tk Notes = "<<bill_100<<endl;
    cout<<"50Tk Notes = "<<bill_50<<endl;
    cout<<"20Tk Notes = "<<bill_20<<endl;
    cout<<"10Tk Notes = "<<bill_10<<endl;
}