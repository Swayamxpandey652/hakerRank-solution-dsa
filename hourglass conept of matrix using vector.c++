There are  hourglasses in . An hourglass sum is the sum of an hourglass' values. Calculate the hourglass sum for every hourglass in , then print the maximum hourglass sum. The array will always be .

***********************************************************************
int hourglassSum(vector<vector<int>> arr) {
    
    int i = arr.size();
    int j = arr[0].size();
    auto max=0;
    if(i!=3 || j!=3){
        for(auto a=0;a<i-2;a++){
            for(auto b=0;b<j-2;b++){
                
                auto sum =(arr[a][b] + arr[a][b+1] + arr[a][b+2]+arr[a+1][b+1]
                +arr[a+2][b] + arr[a+2][b+1] + arr[a+2][b+2]);
                
                if(sum >= max){
                    max = sum;
                }
                
            }
        }
    }
    return max;
}
