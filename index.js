'use strict';

process.stdin.resume();
process.stdin.setEncoding('utf-8');

let inputString = '';
let currentLine = 0;

process.stdin.on('data', function(inputStdin) {
    inputString += inputStdin;
});

process.stdin.on('end', function() {
    inputString = inputString.split('\n');

    main();
});

function readLine() {
    return inputString[currentLine++];
}

//My code 
function miniMaxSum(arr) {
     //Sort mang tu be -> lon
const sortedArray = arr.sort();

    let minSum = 0

    let maxSum = 0

     for (let i = 0; i < arr.length; i++){
         //Bo phan tu cuoi cung cua mang
        if( i < arr.length -1 ) {
            minSum += arr[i]
          } 
          //Bo phan tu dau tien cua mang
        if (i > 0) {
            maxSum += arr[i]
        }
    }

    console.log(minSum , maxSum) 

}

function main() {

    const arr = readLine().replace(/\s+$/g, '').split(' ').map(arrTemp => parseInt(arrTemp, 10));

    miniMaxSum(arr);
}
