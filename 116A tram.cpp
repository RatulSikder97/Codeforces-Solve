#include<bits/stdc++.h>
using namespace std;

int main(){

int n;
cin>>n;
int  a[10000],b[10000];
for(int i=0;i<n;i++){
    cin>>a[i]>>b[i];
}

int diff=0,m=0;
for(int i=0;i<n;i++){

        diff += b[i]-a[i];
        m = max(diff,m);

}

cout<<m<<"\n";

return 0;
}
