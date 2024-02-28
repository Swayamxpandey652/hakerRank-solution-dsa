vector<int> compareTriplets(vector<int> a, vector<int> b) {
    int alice=0;
    int bob=0;
    for(auto i=0;i<3;i++){
        if(a[i]>b[i]){
            alice += 1;
        }else if(a[i]<b[i]){
            bob += 1;
        }else{
            alice += 0;
            bob += 0;
        }
        
    }
return {alice,bob};
}
