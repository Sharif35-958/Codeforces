#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int n,a,b,c,i,temp=0;
    cin>>n;
    for(i=0; i<n; i++)
    {
        cin>> a>>b>>c;
        if(a+b+c>=2)
        {
            temp++;
        }
    }

    cout<<temp<<endl;
}
