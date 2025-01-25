#include<iostream>
#include<vector>
using namespace std;


int maxproduct(vector<int>& arr,int n){
long product=arr[0]*arr[1]*arr[n-1];
long product1=arr[n-1]*arr[n-2]*arr[n-3];
return  max(product,product1);
}
int main(){
    vector<int>arr={23,3,4,22,1,6,56};
  int n=arr.size();
      for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
        if(arr[i]>arr[j])  {
        arr[i]= arr[i]+arr[j];
        arr[j]=arr[i]-arr[j];
        arr[i]=arr[i]-arr[j];
      }}
      }

       cout<<maxproduct(arr,n);

}
