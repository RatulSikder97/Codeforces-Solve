#include<bits/stdc++.h>
using namespace std;


int main(){

char a[100001];

int n;

cin>>n;
int cA=0,cB=0;
for(int i=0;i<n;i++){
    cin>>a[i];
    (char(a[i])=='A') ? cA++ : cB++;
}

if(cA>cB){
    cout<<"Anton\n";
}else if(cA<cB){
    cout<<"Danik\n";
}else{
    cout<<"Friendship\n";
}



return 0;
}
