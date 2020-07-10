#include<bits/stdc++.h>

using namespace std;


int main(){

int n;
float sum=0;

cin>>n;
int a;
int t=n;
while(n--){
    cin>>a;
    sum+=a;

}
cout<<sum/t<<"\n";

return 0;
}

