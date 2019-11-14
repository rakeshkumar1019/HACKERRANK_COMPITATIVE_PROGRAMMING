#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    long a[t];
    long res[t];
    long re[t];
    long r[t];
    
    for(int i=0;i<t;i++){
        cin>>a[i];
    }
    for(int i=0;i<t;i++){
        if(a[i]%2==0){
            r[i]=a[i]/2;
            res[i]=r[i]*r[i];
        }else{
         r[i]=floor(a[i]/2);
         re[i]=a[i]-r[i];
         res[i]=r[i]*re[i];
        
        }
    }
        for(int i=0;i<t;i++){
        cout<<res[i]<<endl;
    }
    
}
