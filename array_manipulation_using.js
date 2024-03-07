Starting with a 1-indexed array of zeros and a list of operations, for each operation add a value to each the array element between two given indices, inclusive. Once all operations have been performed, return the maximum value in the array.
**********************************************************

function arrayManipulation(n, queries) {
    // Write your code here
   
    let arr = new Array(n + 1).fill(0);
    
    queries.forEach(query => {
        let [a, b, k] = query;
        arr[a - 1] += k;
        arr[b] -= k;
    });
    
    let maxVal = 0;
    let currentVal = 0;
    for (let i = 0; i < arr.length; i++) {
        currentVal += arr[i];
        maxVal = Math.max(maxVal, currentVal);
    }
    
    return maxVal;
}
