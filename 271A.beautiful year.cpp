#include<bits/stdc++.h>
using namespace std;


int main()
{

    int n;
    cin>>n;

    int a,b,c,d;
    while(true)
    {
        n++;
        a= n/1000;
        b = (n/100)%10;
        c = (n/10)%10;
        d = (n%10);

        if(a!=b && b!=c  && c!=d && d!=a && a!=c &&b!=d)
        {
            cout<<n<<"\n";
            return 0;
        }

    }



}

