#include<bits/stdc++.h>
using namespace std;

int main()
{

    int  n;
    cin>>n;

    for(int i=0; i<n; i++)
    {

        if(i!=n-1)
        {
            if(i%2==0 )
            {
                cout<<"I hate that ";
            }
            else
            {

                cout<<"I love that ";
            }
        }else{
         if(i%2==0 )
            {
                cout<<"I hate it ";
            }
            else
            {

                cout<<"I love it ";
            }
        }


    }

    cout<<"\n";


    return 0;
}
