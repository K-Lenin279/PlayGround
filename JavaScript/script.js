const myArray = ["Stimpson", "J", "Cat"];
myArray.shift();
myArray.unshift("Happy");

console.log(myArray);

function typeOfFruit(val) {
  let answer = "";

  switch(val) {
    case 1:
      console.log('apple');
      break;
    case 2:
      console.log('mango');
      break;
    case 3:
      console.log('guava');
      break;
    case 4:
      console.log('banana');
      break;
    case 5:
      console.log('kiwi');
      break;
    default:
      console.log('Not a fruit');
      break;
  }
}

typeOfFruit(6);

function isEqual(a, b) {
  if (a === b) {
  return true;
  }
  else {
    return false;
  }
}

console.log(isEqual(4, 8));

function evaluatePrefixSum(arr) {
  let prefixSum = [];
  prefixSum[0] = arr[0];
  for (let i = 1; i < arr.length; i++) {
    prefixSum[i] = prefixSum[i - 1] + arr[i];
  }
  return prefixSum;
}

let arr = [1, 2, 3, 4, 5];

let prefixSumArray = evaluatePrefixSum(arr);

console.log(prefixSumArray);


//Record Collection Setup
const recordCollection = {
  2548: {
    albumTitle: 'Slippery When Wet',
    artist: 'Bon Jovi',
    tracks: ['Let It Rock', 'You Give Love a Bad Name']
  },
  2468: {
    albumTitle: '1999',
    artist: 'Prince',
    tracks: ['1999records[id][prop]', 'Little Red Corvette']
  },
  1245: {
    artist: 'Robert Palmer',
    tracks: []
  },
  5439: {
    albumTitle: 'ABBA Gold'
  }
};

// Only change code below this line
function updateRecords(records, id, prop, value) {
  if (value === "") {
    delete records[id][prop];
  }  else if (prop === "tracks") {
    records[id][prop] = records[id][prop] || [];
    records[id][prop].push(value);
  } else {
    records[id][prop] = value;
  }
  return records;
}

console.log(updateRecords(recordCollection, 5439, 'artist', 'ABBA'));

function reverseWords(str) {
  return str
    .split(' ')
    .map(value => {
      return value.split('').reverse().join('');
    })
    .join(' ');
}

string = 'This is an example!';
console.log(reverseWords(string));