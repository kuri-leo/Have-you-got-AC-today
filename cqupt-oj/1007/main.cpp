#include <iostream>
#include <iomanip>

using namespace std;


int main()
{
    ios::sync_with_stdio(false);
    int x;
    while(cin>>x){
        cout<<(x<1?(x):(x<10?(2*x-1):(3*x)-11))<<endl;
    }
    return 0;
}

