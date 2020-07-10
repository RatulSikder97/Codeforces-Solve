#include<bits/stdc++.h>
using namespace std;



int main()
{

    int t;
    int p,cnt;
    int acc=0;
    cin>>t;
    for(int i=0;i<t;i++){
        cnt=0;
        for(int j=0;j<3;j++){
            cin>>p;
            if(p==1){
                cnt++;
            }
        }
        if(cnt>=2){
            acc++;
        }
    }

    cout<<acc<<"\n";
    return 0;
}

