#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> arr;
    int value,k,n ,l=0,r=l+k-1,subarray_Sum=0;
    cout<<"enter the value of k (subarray length) and n(array size)"<<endl;
    cin>>k>>n;
    cout<<"enter value for an array"<<endl;
    for(int i=0;i<n;i++){
        cin>>value;
        arr[i]=value;
    }

    while(r<=n && l<r){
        subarray_Sum+=arr[l];
        cout<<"Sum of "<<l<<"Subarray = "<<subarray_Sum<<endl;
        l++;

    }


    


}