#include<bits/stdc++.h>
using namespace std;
int main(){
    long n,m,asw;
    cin>>n;
    cin>>m;
    int res=0;
    for(long i=n-1;i>=1;--i){
       res=res+1;
       
    }
    asw=(n*(m-1))+res;
    cout<<asw;
    
}
