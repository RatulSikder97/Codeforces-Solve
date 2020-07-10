

#include <iostream>
#include<string>

using namespace std;


int main() {
	int n;
	cin >> n;
	string a, b;
     int result=0;
     int ch[26];


	for(int i=0;i<n;i++){
		cin>>a>>b;
		for(int i =0;i<a.length();i++){
            ch[a[i]-'a']=1;
		}
        for(int i =0;i<b.length();i++){
            if(ch[b[i]-'a']==1){
                  result =1;
            }
		}

		}
if(result==1){
         cout<<"you got it";
		cout<<result<<"\n";}
else{
    cout<<"you got it";
    cout<<0<<"\n";}
return 0;

}


