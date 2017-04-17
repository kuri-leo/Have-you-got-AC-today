#include<iostream>
#include<cstdio>
#include<algorithm>
 
using namespace std;
 
pair<int,int> arr[1000000];
 
bool cmp(const pair<int,int> a,const pair<int,int> b);
 
int main(void){
//  freopen("in.txt","r",stdin);
//  freopen("out.txt","w",stdout);
    int a,b;
    while(scanf("%d",&a)!=EOF){
        for(int round=0;round<a;round++){
            scanf("%d",&b);
            //getchar();
            for(int i=0;i<b;i++){
                scanf(" (%d,%d)",&arr[i].first,&arr[i].second);
            }
            sort(arr,arr+b,cmp);
            for(int i=0;i<b;i++){
                printf("(%d,%d)",arr[i].first,arr[i].second);
                if(i<b-1){
                    printf(" ");
                }
            }
            printf("\n");
        }
         
    }
    return 0;
}
 
bool cmp(const pair<int,int> a,const pair<int,int> b){
    return a.first>b.first?false:(a.first==b.first?(a.second<b.second?true:false):(true));
}
/**************************************************************
    Problem: 1457
    User: 2017_acmpre_262
    Language: C++
    Result: Accepted
    Time:49 ms
    Memory:9320 kb
****************************************************************/