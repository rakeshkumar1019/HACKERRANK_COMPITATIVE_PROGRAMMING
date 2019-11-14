#include<iostream>
#include<bits/stdc++.h>
#include<algorithm>
using namespace std;
int main(){
    int year;
    cin>>year;
    int array[year];
    for(int i=0;i<year;i++){
        cin>>array[i];
    }
//    finding maximu number in array
int *maxval=max_element(array,array+year);
// cout<<*maxval<<endl;
//find count of macval
int frequency=count(array,array+year,*maxval);
cout<<frequency<<endl;
}
