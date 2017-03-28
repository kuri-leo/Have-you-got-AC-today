#include <iostream>
#include <string>
#include <algorithm>

using namespace std;


int main()
{
    ios::sync_with_stdio(false);
    long long incoming;
    long long result;
    while(cin>>incoming){
        if(incoming<=100000){
            result=incoming*0.1;
        }else if(incoming<=200000){
            result=incoming*0.1+(incoming-100000)*0.075;
        }else if(incoming<=400000){
            result=incoming*0.1+(incoming-100000)*0.075+(incoming-200000)*0.05;
        }else if(incoming<=600000){
            result=incoming*0.1+(incoming-100000)*0.075+(incoming-200000)*0.05+(incoming-400000)*0.03;
        }else if(incoming<=1000000){
            result=incoming*0.1+(incoming-100000)*0.075+(incoming-200000)*0.05+(incoming-400000)*0.03+(incoming-600000)*0.015;
        }else {
            result=incoming*0.1+(incoming-100000)*0.075+(incoming-200000)*0.05+(incoming-400000)*0.03+(incoming-600000)*0.015+(incoming-1000000)*0.01;
        }
        cout<<result<<endl;
    }
    return 0;
}

