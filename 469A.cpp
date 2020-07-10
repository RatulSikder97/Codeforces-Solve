#include<bits/stdc++.h>
using namespace std;

int main(){

int l;
int p,q;
cin>>l;
cin>>p;
int flag =0;
int a,b,c[101]={0};
while(p--){
cin>>a;
   c[a] =1;
}

cin>>q;
while(q--){
cin>>b;
   c[b] =1;
}
for(int i=1;i<=l;i++){

    if(c[i]!=0){
        flag = 1;
    }else{
    flag =0;
    break;
    }
}

flag ? cout<<"I become the guy.\n" : cout<<"Oh, my keyboard!\n";

return 0;
}
