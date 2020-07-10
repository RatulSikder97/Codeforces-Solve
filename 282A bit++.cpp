#include<bits/stdc++.h>
#include<string>
using namespace std;



int main()
{
   int x=0;
   string inp;
   int n;
   cin>>n;

   for(int i=0 ; i<n ;i++){
    cin>>inp;

    if(iinp[0]=='+' ){
        ++x;
    }else if(iinp[0]=='-' ){
        --x;
    }else if(inp[2]=='+'){
       x++;
    }else if(inp[2]=='-'){
     x--;
        //after-=1;
    }
   }

   cout<<x<<"\n";
}


