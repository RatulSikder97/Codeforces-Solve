#include<bits/stdc++.h>
using namespace std;


int main()
{
    int n;
    int a[101] = {0};

    cin>>n;
    int max=0,min=0,x=0,y=0;
    for(int i=0;i<n;i++){
        cin>>a[i];

        if(a[i]<=a[x]){
            x = i;
        }
        if(a[i]>a[y]){
            y = i;
        }

    }
  cout<<(n-1)-(x+(y>x))+y<<"\n":;


    return 0;
}
