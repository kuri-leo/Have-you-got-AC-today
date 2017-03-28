#include <iostream>
#include <iomanip>

using namespace std;


int main()
{
    ios::sync_with_stdio(false);
    double a,b,c;
    while(cin>>a>>b>>c){
        cout<<(a>b?(a>c?a:c):(b>c?b:c))<<endl;
    }
    return 0;
}

