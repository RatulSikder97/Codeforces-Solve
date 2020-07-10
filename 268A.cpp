#include<bits/stdc++.h>
using namespace std;


int main(){
int n;
int h[30], a[30];
cin>>n;
for(int i=0;i<n;i++){
    cin>>h[i]>>a[i];
}

int cnt=0;
for(int i=0;i<n;i++){
    for(int j=i+1;j<n;j++){

        if(h[i] == a[j] && a[i] ==h[j]){

             cnt+=2;
        }else if(h[i] == a[j] || a[i] ==h[j]){

        cnt++;
        }
    }
}

cout<<cnt<<"\n";

return 0;
}


