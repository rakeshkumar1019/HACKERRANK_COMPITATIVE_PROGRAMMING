#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,m,t,temp,c,te,val,answer,res;
    cin>>n;
    cin>>m;
    if(n%2==0 &&m%2==0){
        res=n*m/4;
        cout<<res;
    }else if(n%2==0 && m%2!=0){
         t=n*m;
         temp=(n*(m-1))/4;
        te=n*(m-1);
        val=t-te;
        if(val%2==0){
            c=val/2;
         
        }else{
          c=val-1/2+1;
        }
        answer=temp+c;
        cout<<answer;
    }else if(n%2!=0 && m%2==0){
        t=n*m;
        temp=((n-1)*m)/4;
        te=(n-1)*m;
        val=t-te;
        if(val%2==0){
            c=val/2;
         
        }else{
          c=((val-1)/2)+1;
        }
        answer=temp+c;
        cout<<answer;
        
    }else{
    t=m*n;
    temp=((n-1)*(m-1))/4;
    te=(n-1)*(m-1);
    val=t-te;
        if(val%2==0){
            c=val/2;
         
        }else{
          c=((val-1)/2)+1;
        }
        answer=temp+c;
        cout<<answer;
        }
}
