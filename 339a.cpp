#include<bits/stdc++.h>
#include<string>
using namespace std;

int main()
{
    string in;
    cin>>in;
    string out1="",out2="",out3="";


    if(in.length()==1 )
    {
        if(in[0] =='1')
        {
            cout<<"1\n";
        }
        else if(in[0]=='2')
        {
            cout<<"2\n";
        }
        else if(in[0]=='3')
        {
             cout<<"3\n";
        }
    }
    else
    {
        for(int i=0; i<in.length(); i++)
        {
            if(in[i] =='1')
            {
                out1+="1+";
            }
            else if(in[i]=='2')
            {
                out2+="2+";
            }
            else if(in[i]=='3')
            {
                out3+="3+";
            }
        }


    string outp="";
    outp =out1+out2+out3;
    outp[outp.length()-1]=' ';
    cout<<outp<<"\n";
    }



    return 0;
}

