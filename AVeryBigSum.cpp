#include<iostream>
#include<cmath>
#include<vector>
#include<cstdio>
#include<algorithm>
using namespace std;
int main(){
long long int sum=0;
int n;
cin>>n;
vector<int> ar(n);
int i;
for(i=0;i<n;i++){
cin>>ar[i];
sum=sum+ar[i];
}
cout<<sum;
return 0;
}
