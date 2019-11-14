vector<int> compareTriplets(vector<int> a, vector<int> b) {
int c=0,d=0,e=0;
int alice=0;
int bob=0;
vector<int> ans(2);
for(int i=0;i<a.size();i++){
if(a[i]>b[i]){
alice=alice+1;
ans[0]=alice;
}else if(a[i]<b[i]){
    bob=bob+1;
    ans[1]=bob;
    
}
}
return ans;
}
