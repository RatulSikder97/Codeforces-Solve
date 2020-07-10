#include<bits/stdc++.h>
using namespace std;

int main(){
    int arr[5][5];
    int xr,xc;

    for(int  i=0;i<5;i++){
        for(int j=0;j<5;j++){
            cin>>arr[i][j];
            if(arr[i][j]==1){
                xr=i;
                xc=j;
            }
        }
    }


 int row=0,col=0;
 int step =0;
 row = abs(2-xr);
 col = abs(2-xc);

 cout<<row<<col;
 step = row+col;

 cout<<step<<"\n";

 return 0;
}
