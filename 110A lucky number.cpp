#include<bits/stdc++.h>
using namespace std;


int main(){
 long long n;
int d=0,c=0;
 cin>>n;
 while(n!=0){

    d = n%10;

   if(d==7 ||d==4){
    c++;
   }
    n = n/10;

 }
   (c==7 || c==4) ? cout<<"YES\n" :cout<<"NO\n";


 return 0;
}
