let n=40;
let t1= performance.now();
function fibonacci(a) {
    if (a<=1){
        return 1;
    };
    return fibonacci(a-2)+fibonacci(a-1);

}
let t2= performance.now();
console.log(fibonacci(45));
console.log(t2 - t1);