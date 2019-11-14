#include <bits/stdc++.h>
#include<iostream>


using namespace std;

 int main(){
/*
 * Complete the 'gradingStudents' function below.
 *
 * The function is expected to return an INTEGER_ARRAY.
 * The function accepts INTEGER_ARRAY grades as parameter.
 */
 int n;
 cin>>n;
 int grades[100];
 for(int i=0;i<n;i++){
     cin>>grades[i];
 }

  

  for(int i=0;i<n;i++){
    int res=((grades[i]/5+1)*5)-grades[i];
    if(grades[i]>=38){

    


    if((((grades[i]/5+1)*5)-grades[i])<3){
        grades[i]=((grades[i]/5+1)*5);
      }

}
  }
  for(int i=0;i<n;i++){
      cout<<grades[i]<<endl;
  }
}
  
