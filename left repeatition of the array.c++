A left rotation operation on an array of size  shifts each of the array's elements  unit to the left. Given an integer, , rotate the array that many steps left and return the result.

Example


After  rotations, .
*********************************************************************************************

vector<int> rotateLeft(int d, vector<int> arr) {
    int n=arr.size()-1;
    vector<int> ans;
    int c=n-d;
    
    for(int i=d;i<=n;i++){
        ans.push_back(arr[i]);
    }
    for(int i=0;i<=d-1;i++){
        ans.push_back(arr[i]);
    }
    
    return ans;
}
