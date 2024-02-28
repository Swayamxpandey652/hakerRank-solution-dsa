Given an array of integers, find the sum of its elements.

For example, if the array , , so return .

Function Description

Complete the simpleArraySum function in the editor below. It must return the sum of the array elements as an integer.

******************************************************
int simpleArraySum(vector<int> ar) {
    auto sum=NULL;
    for(auto i=0;i<ar.size();i++){
        auto tmp=NULL;
        tmp=ar[i];
        sum  += tmp;
        
    }
return sum;    
}
