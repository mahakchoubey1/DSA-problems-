#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    
    vector<int>arr={23,4,3,5,6,7,2,3};
    int k=2;
    int n=arr.size();
    
    cout<<"rotated array= "<<endl;
    
    
    for(int j=0;j<k;j++){
       reverse(arr.end(),arr.begin());
    
    }
    for(int i=0;i<n;i++)
{
    cout<<arr[i]<<" ";}
  
}         