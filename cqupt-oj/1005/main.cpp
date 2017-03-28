#include <iostream>
#include <iomanip>

using namespace std;


int main()
{
    ios::sync_with_stdio(false);
    double tem;
    while(cin>>tem){
        cout<<setiosflags(ios::fixed)
        <<setprecision(2)<<"c="
        <<(5*(tem-32)/9)<<endl;
    }
    return 0;
}

