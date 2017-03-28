#include <iostream>

using namespace std;

int main()
{
    int a,b,c;
    while(cin>>a>>b>>c){
        cout<<(a>=b?(a>=c?a:c):(b>c?b:c))<<endl;
    }
}

