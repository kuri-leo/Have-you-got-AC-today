#include <iostream>
#include <iomanip>

using namespace std;


int main()
{
    ios::sync_with_stdio(false);
    int x;
    while(cin>>x){
        cout<<((x>=90)?'A':((x>=80)?'B':((x>=70)?'C':((x>=60)?'D':'E'))))<<endl;
    }
    return 0;
}

