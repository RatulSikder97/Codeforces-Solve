#include<bits/stdc++.h>

using namespace std;


int main()
{
    string s,t;
    cin>>s>>t;
     int n = s.size();

     int flag =0;
    for(int i=0;i<s.size();i++){
        if(s[i] !=t[n-1-i] ){


            flag = 1;
            break;
        }else{
           flag =0;
        }
    }

    (flag==1) ? cout<<"NO\n" : cout<<"YES\n";


  return 0;
}

