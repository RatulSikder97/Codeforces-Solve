#include<bits/stdc++.h>
using namespace std;


int main(){

int n;
cin>>n;
int s,f=0;
int cnt =0;
while(n--){
    cin>>s;
    cnt += (f!=s);
    f=s;
}

cout<<cnt<<"\n";


return 0;
}



