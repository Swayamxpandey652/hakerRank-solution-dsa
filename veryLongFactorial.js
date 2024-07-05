*
 * Complete the 'extraLongFactorials' function below.
 *
 * The function accepts INTEGER n as parameter.
 */

function extraLongFactorials(n) {
    // Write your code here
     let result = BigInt(1);
    
    
    for (let i = 1; i <= n; i++) {
        result *= BigInt(i);
    }
    
    
    console.log(result.toString());
    /*function factorial(num){
        let fact = BigInt(Number);
        if(num != 1){
            fact = num*factorial(num-1); ;
        }else{
                   
        }
        return fact;*/
        
    
    
    
}
