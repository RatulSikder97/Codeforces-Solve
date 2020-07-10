#include<bits/stdc++.h>
#include<string>
using namespace std;



int main()
{
  string a,b;
  int sumA=0,sumB=0;
  cin>>a>>b;
  int result=0;
  for(int i=0;i<a.length();i++){
         if(a[i]>=65 && a[i]<=92){
            a[i] +=32;
         }
         if(b[i]>=65 && b[i]<=92){
            b[i]+=32;
         }



  }
if(a==b){
        result = 0;
       }else if(a>b){
       result = 1;
       }else{
       result = -1;
       }

cout<<result<<"\n";
  return 0;
}


