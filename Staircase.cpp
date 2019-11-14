#include<bits/stdc++.h>
using namespace std;
int main(){
    int row,col;
    int n;
    
    cin>>n;
    int colno=n-1;
    for(row=1;row<=n;row++){
        for(col=1;col<=colno;col++){
            cout<<" ";
        }
        colno--;
        for(int col2=1;col2<=row;col2++){
            cout<<"#";
        }
        cout<<"\n";
    }
}
