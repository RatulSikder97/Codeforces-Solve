#include<bits/stdc++.h>
using namespace std;



int main()
{

    int m,n;
    cin>>m>>n;
     int tileH = 0;
    int rCol = n%2;
    int rRow = m%2;

    tileH = (n/2)*m+(n%2)*(m/2);


    cout<<tileH<<"\n";

    return 0;
}
