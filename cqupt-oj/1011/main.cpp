#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

long long GCD(long long a,long long b);

int main()
{
    ios::sync_with_stdio(false);
    long long a,b;
    while(cin>>a>>b){
        long long gcd=GCD(a,b);
        cout<<gcd<<" "<<a*b/gcd<<endl;
    }
    return 0;
}

long long GCD(long long a,long long b){
    return b==0?a:GCD(b,a%b);
}

