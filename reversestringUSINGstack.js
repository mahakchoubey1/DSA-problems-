let data = [];
let top = 0;
function push(value) {
    data[top] = value;
    top++;
}
function pop() {

    lastRemovedValue = data[top - 1];
    top = top - 1;

    data.length = top;

    return lastRemovedValue;
}

function rev_str(str) {
    let n = str.length;
    for (let i = 0; i < n; i++) {
        push(str[i]);
    }
    // console.log(data);
    for (let i = 0; i < n; i++) {
        str[i] = pop();
    }
}

let string = "mahak";
// console.log(str);
string = string.split("");
console.log(string.join(''));
rev_str(string);
console.log(string.join(''));

// push(20);           //output = [ 'a', '-1': 20 ] when top =-1;
// push('a');
// pop();

// console.log(str);
// console.log(data);
// console.log(data.length);
// console.log(top);



//string reversal using simple array 



// let str="mahak";
// console.log(str);
// str=str.split("");
// console.log(str);
// console.log(data);
// console.log(data.length);
// console.log(top);
// for(let i=0;i<str.length;i++){
// data[i]=str[i];
// }
// console.log(data);
// let n=str.length;
// for(let i=0;i<n;i++){
//    str[i]=data[n-1-i];
//     }


// console.log(str);