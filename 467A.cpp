#include<bits/stdc++.h>

using namespace std;


int main()
{
int n;

int a,b;

cin>>n;
int cnt=0;
while(n--){
cin>>a>>b;

if((b-a)>1){
    cnt++;
}

}


cout<<cnt<<"\n";
  return 0;
}


