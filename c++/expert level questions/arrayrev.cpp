  #include<iostream>
  #include<vector>
  using namespace std;

// void rev(int *arr,int n){   
// int temp[n];
// for(int i=0;i<n;i++)
// {temp[i]=arr[n-i-1];}
// for(int j=0;j<n;j++){
//     arr[j]=temp[j];
//     cout<<arr[j]<<" ";
// }}
// void reverse(int *arr ,int m){
//        for(int i=0;i<m/2;i++){
//         arr[i]= arr[i]+arr[m-i-1];
//         arr[m-i-1]=arr[i]-arr[m-i-1];
//         arr[i]=arr[i]-arr[m-i-1];}
//     cout<<endl;
//      for(int j=0;j<m;j++){
//          cout<<arr[j]<<" ";
// }}
// int checksort(int *arr,int n){
//   for(int i=0;i<n-1;i++){
//       if(arr[i]>arr[i+1]){
//            return 0;
//       }}
// // //   return 1; }
// void remdup(int *arr,int n){
//   int i=0,j=i+1;
//        for(i;i<n;i++){  
//           if(arr[i]==arr[j]){
//             arr[i+1]=arr[j];
//           } 
//        }
//        for(i;i<n;i++){
//         cout<<arr[i]<<" ";
//        }
// }        
// void kthsmallest(int *arr,int n,int k)
// {
//       cout<<endl<<"kth largest value in an array where there are no duplicates values = "<<arr[k-1]<<endl;//as no duplicate exist;
// //if there are duplicates
//  for(int i=0;i<n;i++){
//   if(arr[i]!=arr[i+1]){
//     k--;
//   }
//   if(k==0){
//     cout<<"kth largest value in an array where there are no duplicates values = "<<arr[i]<<endl;
//     break;
//   }
//  }
// }


// void kthlargest(int *arr,int n,int k)
// {
//       cout<<"kth smallest value in an array where there are no duplicates values = "<<arr[n-k]<<endl;//as no duplicate exist;
// //if there are duplicates
//  for(int i=0;i<n;i++){
//   if(arr[n-i-1]>arr[n-i-2]){
//     k--;
//   }
//   if(k==0){
//     cout<<"kth smallest value in an array where there are  duplicates values = "<<arr[i]<<endl;
//     break;
//   }
//  }
// }
// int sort(int *arr,int n){
//       for(int i=0;i<n;i++){
//         for(int j=i;j<n;j++){
//         if(arr[i]>arr[j])  {
//         arr[i]= arr[i]+arr[j];
//         arr[j]=arr[i]-arr[j];
//         arr[i]=arr[i]-arr[j];
//       }}}
//        cout<<endl;
//       for(int k=0;k<n;k++){
//         cout<<arr[k]<<" ";}
// int l=8;
// // cout<<endl<<"enter the value to find the largest  ";
// // cin>>l;//third largest element in  an arrṇ
// kthlargest(arr,n,l);
// kthsmallest(arr,n,l);
// remdup(arr,n);
//       return checksort(arr,n);  
// }
// class Solution
// {
// public:
    int removeDuplicates(vector<int>& nums)
     {
       int index=1;
        int n=nums.size();
        for(int i=1;i<n;i++)
        {
            if(nums[i]!=nums[i-1])
            {
                nums[index]=nums[i];
                index++;
            }
        }
        n=index;
        for(int j=0;j<n;j++)
        {
          cout<<nums[j]<<" ";
        }
        cout<<endl;
        return index;
     }
// };

 int  main(){
    int arr[]={32,4,65,52,23,31,52,6,2,70,2};
    vector<int> arr2={3,4,5,6,6,7,7,8};
    int n=sizeof(arr)/sizeof(arr[1]);
   
    // rev(arr, n);
    // reverse(arr2, m);
    // cout<<endl<<(checksort(arr,n)?"true":"true");
    // sort(arr,n);ṇṇ
    removeDuplicates(arr2);
    return 0;
}