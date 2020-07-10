#include<bits/stdc++.h>
using namespace std;


int main(){
int t,n;

int arr[10000];
cin>>t;
int se=0;
for(int i=0;i<t;i++){
    cin>>n;
   for(int j=0;i<n;j++){

    cin>>arr[j];
   }

   for(int j=0;j<n;j++){
        if(arr[j]<arr[j+1]){
            se = j;
        }
   }
}



}

