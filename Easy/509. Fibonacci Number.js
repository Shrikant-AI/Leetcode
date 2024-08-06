/**
 * @param {number} n
 * @return {number}
 */
// Using Recursion : 

var fib = function(n) {
    if(n<=1){
        return n;
    }
    let last = fib(n-1);
    let slast = fib(n-2);
    return last + slast
};


// Using For loop :

var fib = function(n) {
    if (n <= 1) {
        return n;
    }
    
    let a = 0;
    let b = 1;
    let result = 0;
    
    for (let i = 2; i <= n; i++) {
        result = a + b;
        a = b;
        b = result;
    }
    
    return result;
};
