let qu=[];
let top=qu.length;
let max=5;
function enqueue(value){
   if(top>=max){
console.log("stack is full");
   }
   else 
   qu[top]=value;
top++;

}
function dequeue(){
    if(top<=0){
console.log("stack is empty")
    }
  else 
  {for(let i=0;i<qu.length;i++){
    qu[i]=qu[i++];}

  }
  top--;
  qu.length= top;

}
function display(){
console.log(qu);
}

enqueue(65);
display(qu);
enqueue(23)
enqueue(5)
enqueue(45)
enqueue(34)
display()
enqueue(4)
dequeue()
display()
dequeue()
dequeue()
dequeue()
dequeue()
dequeue()

display()
dequeue()
