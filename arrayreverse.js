// function Reverse(arr,k){
//     console.log(arr[k]);
//     if(k>0){Reverse(arr,--k);} }
// let array=[23,1,3,44],k=array.length-1;
// Reverse(array,k);
function Reverse(arr,start,end){
    if(start<=end){
        consolelog(arr);
    temp=arr[start];
    arr[start]=arr[end];
    arr[end]=temp;
    Reverse(arr,start+1,end-1)
}
    
}

let array=[23,1,3,44],k=array.length-1;
Reverse(array,k);
