 var createCounter= function(n){
    let count=n;
   return function f(){
        return count++;
    }
 }