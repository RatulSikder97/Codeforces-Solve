#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n;
        cin>>n;
        long long int a;
        for(int i=0;i<n;i++)
            {
                cin>>a;
                if(i%2==0)
                cout<<abs(a)<<" ";
                else
                cout<<-abs(a)<<" ";
            }
        cout<<"\n";
    }
}
