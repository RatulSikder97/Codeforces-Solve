
#include<bits/stdc++.h>
#include<string>
using namespace std;


int main(){
int t;
cin>>t;
char arr[51];

for(int i=0;i<t;i++){
    cin>>arr[i];
}

int cnt=0;
for(int i=0;i<t;i++){

    if(arr[i]==arr[i+1] && (i+1)!=t){

    cnt++;
    }
}


cout<<cnt<<"\n";

return 0;
}
