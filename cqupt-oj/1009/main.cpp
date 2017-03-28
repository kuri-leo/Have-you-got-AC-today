#include <iostream>
#include <string>
#include <algorithm>

using namespace std;


int main()
{
    ios::sync_with_stdio(false);
    string str;
    while(cin>>str){
        cout<<str.length()<<"\n";
        for(int i=0,len=str.length();i<len;i++){
            cout<<str[i];
            if(i<len-1){
                cout<<" ";
            }else{
                cout<<"\n";
            }
        }
        reverse(str.begin(),str.end());
        cout<<str<<endl;
    }
    return 0;
}

