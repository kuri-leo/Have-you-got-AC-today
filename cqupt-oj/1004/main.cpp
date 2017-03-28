#include <cstdio>
#include <cmath>
#include <iostream>
#include <iomanip>

using namespace std;


int main()
{
    ios::sync_with_stdio(false);
    const double PI=3.14;
    double r,h;
    while(cin>>r>>h){
        double C1=2*PI*r;
        double Sa=PI*r*r;
        double Sb=4*PI*r*r;
        double Va=(4/3)*PI*r*r*r;
        double Vb=Sa*h;
        //Vb=floor(Vb*1000)/1000;

        cout<<setiosflags(ios::fixed)<<setprecision(2)<<
        "C1="<<C1<<
        "\nSa="<<Sa<<
        "\nSb="<<Sb<<
        "\nVa="<<Va<<
        "\nVb="<<Vb<<endl;
    }
    return 0;
}

//未AC，精度有问题
