int connectingTowns(int n, vector<int> routes) {
    /*
     * Write your code here.
     */
     int mul=1;
    for( int i=0;i<routes.size();i++){
        mul=(mul* routes[i])%1234567;
    }
    return mul;
}
