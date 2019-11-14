#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    char res[t];
    int x[t],y[t],a[t],b[t];
    for(int i=0;i<t;i++){
        cin>>x[i]>>y[i]>>a[i]>>b[i];
    }
    for(int i=0;i<t;i++){
    if(__gcd(x[i],y[i])==__gcd(a[i],b[i])){
        cout<<"YES"<<endl;
    }else{
       cout<<"NO"<<endl;
    }
    }
 
    
    
}
