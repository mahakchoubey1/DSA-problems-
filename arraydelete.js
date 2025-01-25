
function Delete() {
    let pos = parseInt(document.getElementById("pos").value);
    //let elem=document.getElementById("elem").value;
    let arr = [2, 4, 3, 55, 6, 44];
    for (let i = pos; i < arr.length - 1; i++) {
        arr[i] = arr[i + 1];
    }
    console.log(arr)//if pos=2 then arr=[2,4,undefined,6,44,undefined]
    arr.length = arr.length - 1
    console.log(arr);
    document.write(`[${arr},]`);
    // if pos=2then arr=[2,4,undefined,6,44]


    //delete the value
    //inbuilt
    arr.splice(2, 1);
}


let pos = 3;
//let elem=document.getElementById("elem").value;
let arr = [2, 4, 3, 55, 6, 44];
for (let i = pos; i < arr.length - 1; i++) {
    arr[i] = arr[i + 1];
}
arr.length = arr.length - 1;
console.log(arr)//2,4,3,6,44;

let elem = 44;
let arr = [3, 4, 33, 5, 6];
for (let i = 0; i < arr.length; i++) {
    if (elem == arr[i]) {
        console.log(elem);
        break;
    }

}
Delete();

