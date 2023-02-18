#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,temp=0;
    cin>>a>>b;
    while(b>=a)
    {
        a=a*3;
        b=b*2;
        temp++;
    }

    cout<<temp;
}
