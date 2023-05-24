const person = {
  name: "John Doe",
  age: 29
};

const greetings = `My name is ${person.name}!
I am ${person.age} years old.`;

console.log(greetings);

const myPromise = new Promise((resolve, reject) => {
  const myReplyPromise = true;
  if (myReplyPromise) {
    resolve('Promise was fulfilled');
  } else {
    reject('Promise was rejected');
  }
});

myPromise.then(result => {
  console.log(result);
});

myPromise.catch(error => {
  console.log(error);
});

// Explicit constructor
class SpaceShuttle {
  constructor(targetPlanet) {
    this.targetPlanet = targetPlanet;
  }
  takeOff() {
    console.log('To ' + this.targetPlanet + '!');
  }
}

// Implicit constructor
class Rocket {
  launch() {
    console.log('To the moon!');
  }
}

const zeus = new SpaceShuttle('Jupiter');
zeus.takeOff();

const atlas = new Rocket();
atlas.launch();

// Getters and Setters
class Book {
  constructor(author) {
    this._author = author;
  }
  get writer() {
    return this._author;
  }
  set writer(updatedAuthor) {
    this._author = updatedAuthor;
  }
}

const novel = new Book('anonymous');
console.log(novel.writer);
novel.writer = 'newAuthor';
console.log(novel.writer);