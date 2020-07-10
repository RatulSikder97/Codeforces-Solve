#include<bits/stdc++.h>
using namespace std;



int main(){

int k,n,w;

cin>>k>>n>>w;

int need = 0;
for(int i=0;i<w;i++){
    need += (i+1)*k;
}

int brow = 0;

brow = need - n;

if(brow>0){
    cout<<brow<<"\n";
}else{
    cout<<0<<"\n";
}

return 0;
}
