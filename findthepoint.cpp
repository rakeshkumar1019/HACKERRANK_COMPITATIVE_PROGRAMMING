#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int p1[n],p2[n],q1[n],q2[n],r1[n],r2[n];
    int ans1[n],ans2[n];
    for(int i=0;i<n;i++){
        cin>>p1[i]>>p2[i]>>q1[i]>>q2[i];
    }

    for(int i=0;i<n;i++){
            r1[i]=q1[i]-p1[i];
            r2[i]=q2[i]-p2[i];
            ans1[i]=r1[i]+q1[i];
            ans2[i]=r2[i]+q2[i];
            cout<<ans1[i]<<" "<<ans2[i]<<endl;
    }
        

}
