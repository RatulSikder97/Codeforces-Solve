#include<bits/stdc++.h>
using namespace std;


int main(){

int n;
cin>>n;
int a[101],b[101] = {0};

for(int i=0;i<n;i++){
cin>>a[i];
b[a[i]] = i+1;
}

int m = sizeof(a)/sizeof(a[0]);
for(int i=0;i<m;i++){

    if(b[i]!=0){
        cout<<b[i]<<" ";
    }
}




cout<<"\n";

return 0;
}
