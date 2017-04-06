#include<iostream>
#include<string>

using namespace std;

int main(void){
    ios::sync_with_stdio(false);
    int n;

    while(cin>>n){
        string str;
        long long count=0;
        for(int i=0;i<n;i++){
            cin>>str;
            switch(str[0]){
                case 'T':{
                    count+=4;
                    break;
                }
                case 'C':{
                    count+=6;
                    break;
                }
                case 'O':{
                    count+=8;
                    break;
                }
                case 'D':{
                    count+=12;
                    break;
                }
                case 'I':{
                    count+=20;
                    break;
                }
                default:{
                    break;
                }
            }
        }
        cout<<count<<endl;
    }
}

