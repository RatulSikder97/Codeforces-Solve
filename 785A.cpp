#include<bits/stdc++.h>
using namespace std;


int main(){
string s;
int n;
cin>>n;
int cnt=0;
while(n--){
    cin>>s;
    if(s == "Tetrahedron"){
        cnt+=4;
    }
    if(s == "Cube"){
        cnt+=6;
    }
    if(s == "Octahedron"){
        cnt+=8;
    }
    if(s == "Dodecahedron"){
        cnt+=12;
    }
     if(s == "Icosahedron"){
        cnt+=20;
    }
}


cout<<cnt<<"\n";
return 0;
}

