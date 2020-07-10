#include <bits/stdc++.h>
using namespace std;

int main(){


int t;
int n,a[1001];
int b[1001][1001];
cin>>t;

for(int i=0;i<t;i++){
    cin>>a[i];

}

for(int i=0;i<t;i++){
    for(int j=i;j<t;j++){
        b[i][j] = a[i]+a[j];
    }
}

for(int i=0;i<t;i++){
    for(int j=i;j<t;j++){
       cout<< b[i][j] <<" ";
    }
    cout<<"\n";
}


return 0;
}
