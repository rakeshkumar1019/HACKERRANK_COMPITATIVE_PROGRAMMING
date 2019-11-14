#include<iostream>
#include<cmath>
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    long sum=0;
    long res;
    cin>>n;
    long a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
//    int nn=sizeof(a)/sizeof(a[0]);
    sort(a,a+n);
    for(int i=0;i<n;i++){
         res=pow(2,i)*a[n-1-i];
        sum=sum+res;
    }
    cout<<sum;
}
