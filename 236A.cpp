
#include<bits/stdc++.h>
#include<string>
using namespace std;


int main()
{
    string name;
    cin>>name;

    int cnt=0;
    int flag =0;
    for(int i=0; i<name.length(); i++)
    {
        flag =0;
        for(int j=0; j<i; j++)
        {
            if(name[i]==name[j] )
            {
                flag=1;
                break;
            }
        }
         if(!flag)
            {
                cnt++;
            }
    }

if(cnt%2==0){
    cout<<"CHAT WITH HER!\n";
}else{
    cout<<"IGNORE HIM!\n";
}



    return 0;
}
