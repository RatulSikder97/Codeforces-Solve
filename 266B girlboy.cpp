#include<bits/stdc++.h>
#include<string>
using namespace std;


int main(){
int n,t;
string s;

cin>>n>>t;
cin>>s;

if(s.length()>n){
    return 0;
}

string a;
while(t--){
    for(int i=0;i<n;i++){
    if(s[i+1]>s[i]){

        swap(s[i+1],s[i]);
        i++;

    }

}
}


cout<<s<<"\n";

return 0;
}
