#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    float neg=0;
    float pos=0;
    float zero=0;

    cin>>n;
    vector<int> arry(n);
    for(int i=0;i<n;i++){
        cin>>arry[i];
    }
    for(int i=0;i<n;i++){
        if(arry[i]==0){
            zero=zero+1;
        
        }
        
        if(arry[i]>0){
            pos=pos+1;
            
        }
        if(arry[i]<0){
            neg=neg+1;
            
        }
    }
    float positive=pos/n;
    float negitive=neg/n;
    float ze=zero/n;


    cout<<fixed<<setprecision(6)<<positive<<"\n";
    cout<<fixed<<setprecision(6)<<negitive<<"\n";
    cout<<fixed<<setprecision(6)<<ze<<"\n";
    
    
}
