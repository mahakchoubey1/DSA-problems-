// #include<iostream>
// #include<vector>
// using namespace std;


// void median(vector<int>&arr,int n){
// int m=n/2,median=0;
// if(n%2==0) {
//       median=arr[m-1]+arr[m+1];
//       cout<<"the median value in an array is"<<median<<endl;
// } 
// median=arr[m];
// cout<<median<<endl;


// }
// int main(){
//     vector<int>arr={23,3,4,22,1,6,56};
//   int num=3,pro=1,n=arr.size();
//       for(int i=0;i<n-1;i++){
//         for(int j=i+1;j<n;j++){
//         if(arr[i]>arr[j])  {
//         arr[i]= arr[i]+arr[j];
//         arr[j]=arr[i]-arr[j];
//         arr[i]=arr[i]-arr[j];
//       }}
//       }
//     for(int i=n-num;i<n;i++)
//        {
//           pro*=arr[i];
//           cout<<arr[i]<<" ";
//        }
//        cout<<endl<<pro<<endl;
//        median(arr,n);
// }





#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        // Merge the two sorted arrays
        int n1 = nums1.size(), n2 = nums2.size();
        int totalSize = n1 + n2;
        vector<int> merged(totalSize);
        
        merge(nums1.begin(), nums1.end(), nums2.begin(), nums2.end(), merged.begin());
        
        // Find the median
        if (totalSize % 2 == 1) {
            return merged[totalSize / 2]; // Odd number of elements
        } else {
            int mid = totalSize / 2;
            return (merged[mid - 1] + merged[mid]) / 2.0; // Even number of elements
        }
    }
};
