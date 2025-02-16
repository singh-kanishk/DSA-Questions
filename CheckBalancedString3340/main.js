function isBalanced(num) {
    let evenSum = 0;
    let oddSum = 0;

    
    for (let i = 0; i < num.length; i++) {
        const digit = parseInt(num[i]);  
        if (i % 2 === 0) {
            evenSum += digit;  
        } else {
            oddSum += digit;   
        }
    }

    
    return evenSum === oddSum;
}


console.log(isBalanced("1230")); 
console.log(isBalanced("112233"));
console.log(isBalanced("12345")); 