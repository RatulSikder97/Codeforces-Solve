#include<bits/stdc++.h>
using namespace std;


int main(){

int a[4]={0},n,cnt=0;
for(int i=0;i<4;i++){
        cin>>n;
    if(a[0]!=n && a[1]!=n && a[2]!=n && a[3]!=n){
        a[i] = n;
        cnt++;
    }
}

cout<<4-cnt<<"\n";





return 0;
}
