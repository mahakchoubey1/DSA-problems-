
//only merged array
let arr4=[2,4,3,5];
let ar6=[3 ,4,5,55];
let arr5=[];
for(let i=0;i<arr4.length;i++){
    arr5.push(arr4[i]);
}
for(let i=0;i<ar6.length;i++){
    arr5.push(ar6[i]);//arr3[ar.length+i]=ar2[i];
}
console.log(arr5);



// sorted and merged array
let ar=[2,4,3,5];
 let ar2=[3 ,4,5,55];
let arr3=[];
let i=0,j=0,k=0;
// while(i<ar.length){
//     arr3.push(ar[i]);
// i++;
// }
// console.log(arr3);
// //i=0;
// while(j<ar2.length){
//     arr3[ar.length+j]=ar2[j];
// j++;
// }console.log(arr3);
// i=0,j=0;

while(i<ar.length && j<ar2.length){
    if(ar[i]<ar2[j]){
        arr3[k]=ar[i];
        i++;
    // j++;
    }
    else{
        arr3[k]=ar2[j];
        j++;
    }
k++;
}
while(j<ar2.length){
    arr3[k]=ar2[j];
    j++;k++;
}
console.log(arr3);
