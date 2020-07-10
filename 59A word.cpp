#include<bits/stdc++.h>

using namespace std;


int main()
{
    string s;

    cin>>s;

    int n = s.size();
    int cnt=0;
    for (char x : s)
		cnt += (x == char(toupper(x)));


if(cnt<=s.size()/2 ){
 for(char x:s)
  {
    cout<<char(tolower(x));
  }
  }else{
for(char x:s)
  {
    cout<<char(toupper(x));
  }
  }


    cout<<"\n";


    return 0;
}
