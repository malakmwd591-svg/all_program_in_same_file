document.writeln("this is an external file <br>");

document.writeln(3 == "3");   
document.writeln("<br>");
document.writeln(3 === "3");  
document.writeln("<br><hr>");

var temp = 30;

if (temp >= 100) {
    document.writeln("boiling <br>");
} else if (temp < 100 && temp >= 60) {
    document.writeln("warm <br>");
} else {
    document.writeln("cold <br>");
}

var s;
if (temp >= 100) {
    s = "boiling";
    document.writeln(s + "<br>");
} else {
    s = "not boiling";
    document.writeln(s + "<br>");
}

var s2 = (temp >= 100) ? "boiling" : "not boiling";
document.writeln(s2 + "<br><hr>");

var day = 2;
switch (day) {
    case 1:
        document.writeln("sunday <br>");
        break;
    case 2:
        document.writeln("monday <br>");
        break;
    case 3:
        document.writeln("tuesday <br>");
        break;
    default:
        document.writeln("invalid day <br>");
}

function welcome() {
    console.log("welcome");
}
welcome();

function add(n1 = 2, n2 = 7) {
    return n1 + n2;
}
console.log(add(3, 4));

var y = function () {
    console.log("this is an anonymous function");
};
y();

function callAnotherFn(Fn) {
    console.log("this is another function");
    Fn();
}
callAnotherFn(function () {
    console.log("hi");
});
callAnotherFn(y);

for (let i = 0; i < 5; i++) {
    var e = 2;   
    let p = 9;   
    console.log(i);
}
console.log(e);

var arr = [100, 20, 70, "name", "age"];
console.log(arr[3]);

arr[5] = 500;
console.log(arr);

console.log(arr.length);

arr.pop();
console.log(arr);

arr.push(900, 800);
console.log(arr);

arr.splice(3);
console.log(arr);

var arr4 = [100, 20, 30, 70, "name", "string"];
arr4.splice(4, 0, "sara");
console.log(arr4);

let arrA = [3, 5, 7];
let arr2 = [8, 9, 0];
let newarr = arrA.concat(arr2);
console.log(newarr);

let arr3 = ["welcome", "ali", "and", "omar"];
let sstr = arr3.join("+");
console.log(sstr);

let strarr = ["apple", "line", "fine", "mango"];
strarr.sort();
console.log(strarr);

let arr5 = [10, 2, 5];
arr5.sort((a, b) => a - b);
console.log(arr5);

for (var i = 0; i < strarr.length; i++) {
    console.log(strarr[i]);
}

strarr.forEach(function (element) {
    console.log(element);
});

for (var element of strarr) {
    console.log(element);
}

var obj1 = document.getElementById("111");
console.log(obj1);

var obj2 = document.getElementsByClassName("p1");
console.log(obj2);

var obj3 = document.getElementsByTagName("h2");
console.log(obj3);

var obj4 = document.querySelector("#div1");

if (obj1) {
    obj1.innerHTML = "first";
}

if (obj4) {
    obj4.style.background = "white";
}

var obj6 = document.getElementsByTagName("button")[0];
if (obj6) {
    obj6.addEventListener("click", function () {
        console.log("button clicked");
    });
}


let personJSON = {
    name: "Malak",
    age: 25,
    profession: "Data Science Engineer"
};

document.writeln("<hr>");
document.writeln("Person JSON: <br>");
document.writeln(JSON.stringify(personJSON) + "<br>");

let personObj = JSON.parse(JSON.stringify(personJSON));
document.writeln("Name: " + personObj.name + "<br>");
document.writeln("Age: " + personObj.age + "<br>");
document.writeln("Profession: " + personObj.profession + "<br>");
document.writeln("<hr>");

let person = {
    name: "MALAK",
    age: 30,
    welcome: function () {
        console.log("welcome " + this.name);
    }
};
person.welcome();
console.log(person);

person.age = 36;

console.log(Object.keys(person));
console.log(Object.values(person));
console.log(Object.entries(person));

let person2 = {};
Object.assign(person2, person, { department: "it" });
console.log(person2);

function Person(name, age) {
    this.name = name;
    this.age = age;
}
let p1 = new Person("mai", 25);
console.log(p1.name);
let p2 = new Person("samy", 20);
console.log(p2.age);

function Animal(name) {
    this.name = name;
}
Animal.prototype.sound = function () {
    console.log(this.name + " makes a sound");
};
function Dog(name) {
    Animal.call(this, name);
}
Dog.prototype = Object.create(Animal.prototype);
Dog.prototype.constructor = Dog;
let d = new Dog("puppy");
d.sound();

class Animal1 {
    constructor(name) {
        this.name = name;
    }
    sound() {
        console.log(this.name + " makes a sound");
    }
}
class Dog1 extends Animal1 {
    constructor(name, type) {
        super(name);
        this.type = type;
    }
    sound() {
        console.log(this.name + " barks");
    }
    getInfo() {
        console.log(this.name + " " + this.type);
    }
}
let d1 = new Dog1("puppy", "dog type");
d1.sound();
d1.getInfo();

let str = JSON.stringify(p1);
console.log(str);
let obj = JSON.parse(str);
console.log(obj);
