function smash(words) {
  return words.join(' ');
};

console.log(smash(['hello', 'world', 'this', 'is', 'great'])); 

function sum(numbers) {
  "use strict";
  let total = 0;
  
  for (let i = 0; i < numbers.length; i++) {
    total += numbers[i];
  }

  return total;
};

console.log(sum([1, 2, 3, 4, 56, 7]));

var fizzBuzz = function(n) {
  let result = [];

  for (var i = 1; i <= n; i++) {
    if (i % 15 === 0) {
      result.push("FizzBuzz");
    }  else if (i % 5 === 0) {
      result.push("Buzz");
    }  else if (i % 3 === 0) {
      result.push("Fizz");
    }  else {
      result.push(i + "");
    }
  }

  return result;
};

/* JavaScript LeetCode Solution Sample
var fizzBuzz = (n) => {
  let res = []

  for (let i = 1; i <= n; i++){
      let string = ''
      if (i % 3 === 0) string += 'Fizz'
      if (i % 5 === 0) string += 'Buzz'

      if (string === '') string += i
      res.push(string)
  }


  return res
}; */

function getGrade(s1, s2, s3) {
  // Code here
  var avg = (Math.floor((s1 + s2 + s3) / 30));

  return (avg === 10) ? 'A'
    : (avg === 9) ? 'A'
    : (avg === 8) ? 'B'
    : (avg === 7) ? 'C'
    : (avg === 6) ? 'D'
    : 'F';
}

/* Alternatively
function getGrade (s1, s2, s3) {
  return {10:'A',9:'A',8:'B',7:'C',6:'D'}[Math.floor((s1 + s2 + s3) / 3)]||'F'
} */

console.log(getGrade(87, 89, 94));

var numberOfSteps = function(num) {
  let steps = 0;

  while (num > 0) {
    if (num % 2 === 0) {
      num /= 2;
    } else {
      num--;
    }
    steps++;
  }
  return steps;
};

console.log(numberOfSteps(16));