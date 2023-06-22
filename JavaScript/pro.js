// Sum of an Array by Recursion
/*const sumArr = (myArr) => {
  if (myArr.length < 1) {
    return 0;
  }
  return myArr.pop() + sumArr(myArr);
}

let newArr = sumArr([56, 98, 76, 54, 23]);
console.log(newArr);

// Find the Average of an Array
const findAvg = (arr) => {
  let avg = 0;
  for (let i = 0; i < arr.length; i++) {
    let currentNum = arr[i];
    avg += currentNum;
  }
  avg = avg / arr.length;
  return avg;
}

let currentArr = findAvg([2, 8, 14]);
console.log(currentArr);

// Find the Missing Integer in a Given Array of 1 to 10
const missingInt = (intArr) => {
  j
}

let ourArr = missingInt([1, 2, 3, 4, 5, 6, 8, 9, 10]);
console.log(ourArr);*/

// CodeWars Kata
function solution(str, ending) {
  // CODE
  return (str.slice(-ending.length) === ending) ? true : false;
  // return (str.substr(-ending.length) === ending) ? true : false;
  // return str.slice(str.length - target.length) === target;
  /** let re = new RegExp(target + "$", "i");

  return re.test(str); */
}

let soln = solution('abcde', 'cde');
console.log(soln);

// Find the Factorial
const factorialize = (num) => {
  // If the number is less than 0, reject it.
  if (num < 0) {
    return -1;
  }
  // If the number is 0, its factorial is 1.
  else if (num === 0) {
    return 1;
  }
  /*
    First Part of the recursion method
    You need to remember that you won’t have just one call, you’ll have several nested calls
        
    Each call: num === "?"        	         num * factorialize(num - 1)
    1st call – factorialize(5) will return    5  * factorialize(5 - 1) // factorialize(4)
    2nd call – factorialize(4) will return    4  * factorialize(4 - 1) // factorialize(3)
    3rd call – factorialize(3) will return    3  * factorialize(3 - 1) // factorialize(2)
    4th call – factorialize(2) will return    2  * factorialize(2 - 1) // factorialize(1)
    5th call – factorialize(1) will return    1  * factorialize(1 - 1) // factorialize(0)
        
    Second part of the recursion method
    The method hits the if condition, it returns 1 which num will multiply itself with
    The function will exit with the total value
    */
  else {
    return (num * factorialize(num - 1));
  }
}

let fact = factorialize(5);
console.log(fact);