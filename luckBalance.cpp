#include<bits/stdc++.h>
using namespace std;
int main(){
int n,k,ind=0,num=0;
cin>>n;
cin>>k;
int l[n];
int t[n];
for(int i=0;i<n;i++){
    cin>>l[i]>>t[i];
}
//for(int i=0;i<n;i++){
//    cout<<l[i]<<" "<<t[i]<<endl;
//}
int frequency=count(t,t+n,1);
int a[frequency];

for(int i=0;i<n;i++){
    if(t[i]!=0){
        a[ind]=l[i];
        ind+=1;
    
        
    }
}
//for(int i=0;i<frequency;i++){
//    cout<<a[i];
//}
sort(a,a+frequency);
int val=frequency-k;
for(int i=0;i<val;i++){
num=num+a[i];    
}
//cout<<num;
int sum=0;
for(int i=0;i<n;i++){
    sum=sum+l[i];
}
//cout<<"sum"<<sum<<endl;
//cout<<"num "<<num<<endl;
int res=sum-num-num;
cout<<res;


}
