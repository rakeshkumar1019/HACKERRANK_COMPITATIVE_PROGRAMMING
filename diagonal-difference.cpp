#include<iostream>
#include <bits/stdc++.h>
#include<math.h>
using namespace std;
int main(){
    int n;
    int c=0;
    int d=0;
    
    cin>>n;
    int mattrix[n][n];


    for(int i=0;i<n;++i){
        for(int j=0;j<n; ++j){
            cin>>mattrix[i][j];
            
        }
    }
    
    
    
    
//    left to right diagnol element
for(int i=0;i<n;++i)
        {
        for(int j=0;j<n; ++j){
        if(i==j){
            c=c+mattrix[i][j];
        }
       }
    
}

// right to left diagonal matrxi
for(int i=0;i<n;++i)
        {
        for(int j=0;j<n; ++j){
        if(i+j==(n-1)){
            d=d+mattrix[i][j];
        }
       }
    
}





int res=abs(c-d);
cout<<res;
    
    
    
     
}
