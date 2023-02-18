#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x,s;
    cin>>x;
    if(x%5==0)
    {
       s=x/5;
    }
    else
    {
        s=(x/5)+1;
    }
    cout<<s<<endl;
}

