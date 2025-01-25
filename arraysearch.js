
        function Search(){
        let elem=parseInt(document.getElementById("search").value);
        //document.getElementById("search").value;
        let arr=[3,4,33,5,6,2,77,11,887];
        for(let i=0;i<arr.length;i++){
            if(elem===arr[i]){
     //  === operator do not convet implicitly
             console.log("found!");
             console.log(i);
             break;
           }   
        }}

        
let array=[2,3,4,5,7,66,8];
let el=44,pos=3,n=array.length;

for(let i=n;i>=pos;i--){
 if(i==pos){
     array[pos]=el;
     break;
 }
 array[i]=array[i-1];

}
for(let j=0;j<=n;j++){
     console.warn(array[j]);
   //
}
console.log(array);
console.warn(array);


       
        
       
        
    