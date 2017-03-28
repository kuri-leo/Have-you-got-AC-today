#include <iostream>

using namespace std;

int main()
{
    char array[5];
    while(cin>>array){
        for(int i=0;i<5;i++){
            array[i]+=4;
        }
        cout<<array<<endl;
    }
}

