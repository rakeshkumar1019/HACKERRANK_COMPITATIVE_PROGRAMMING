#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    
    int array[5];
    for(int i=0;i<5;i++){
        cin>>array[i];
    }
    int minx=array[0];int maxx=array[0];
    
    long long  sum=array[0];
    for(int i=1;i<5;i++){
        minx=min(minx,array[i]);
        maxx=max(maxx,array[i]);
        sum+=array[i];
    }
    cout<<sum-maxx<<" "<<sum-minx;
    
}
