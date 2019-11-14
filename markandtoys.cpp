 #include<iostream>
 #include<bits/stdc++.h>
 #include<algorithm>
 using namespace std;
 int main(){
     int n,k,i,j;
     cin>>n>>k;
     int count=0;
     long sum=0;
     int array[n];
     for(i=0;i<n;i++){
         cin>>array[i];
     }
     sort(array,array+n);
     for(i=0;i<n;i++){
         sum=sum+array[i];
         if(sum<k){
             count+=1;
         }
         
     }
     cout<<count;
     
     
 }
