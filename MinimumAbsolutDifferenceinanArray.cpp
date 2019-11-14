#include<iostream>
#include<bits/stdc++.h>
#include<algorithm>
using namespace std;
int main(){
    int n,i,j;
    
    cin>>n;
    
    int a[n];
    for(i=0;i<n;i++){
        cin>>a[i];
    }
    int nn = sizeof(a)/sizeof(a[0]); 
     sort(a,a+nn);
    int min=abs(a[0]-a[1]);
    for(i=0;i<nn-1;i++){
        if(abs(a[i]-a[i+1])<min)
            min=abs(a[i]-a[i+1]);
        
                    
        }
    
    cout<<min;
}
