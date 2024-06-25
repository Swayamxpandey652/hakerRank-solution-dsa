/*
 * Complete the 'diagonalDifference' function below.
 *
 * The function is expected to return an INTEGER.
 * The function accepts 2D_INTEGER_ARRAY arr as parameter.
 */

function diagonalDifference(arr) {
    // Write your code here
    let n = arr.length;
    let primarySum = 0;
    let secondarySum = 0;
    
    for(let i = 0;i<n;i++){
        primarySum += arr[i][i];
        secondarySum += arr[i][n-i-1];
    }
    let differnce = Math.abs(primarySum-secondarySum);
    
    return differnce;
}
