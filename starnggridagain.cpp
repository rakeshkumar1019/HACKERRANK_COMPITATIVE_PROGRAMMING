#include<bits/stdc++.h>
#include<iostream>
#include<algorithm>
#include<cmath>
using namespace std;
int main(){
    long r,c;
    long ans;
    cin>>r;
    cin>>c;
    long a[5]={0,2,4,6,8};
    long b[5]={1,3,5,7,9};
    double rr=r;
    double g=rr/2;
    long aa=ceil(g);
    long re=(aa-1)*10;
    long i=c-1;
        if(r%2==0){
        ans=b[i]+re;
        }
        if(r%2!=0){
        ans=a[i]+re;    
        }
   cout<<ans;
}
