#include<bits/stdc++.h>
using namespace std;


int main(){

int n,h;
int a;

cin>>n>>h;


 int cnt = 0;
while(n--){
    cin>>a;
    if(a>h){
        cnt+=2;
    }
    else{
        cnt++;
    }
}

cout<<cnt<<"\n";

return 0;
}

