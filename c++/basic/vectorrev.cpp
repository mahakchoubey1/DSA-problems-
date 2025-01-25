#include<iostream>
#include<vector>
using namespace std;
void reverse(vector<int> arr,int n)
{
    int l=0,r=n-l-1;
 while(l<r)
    {
          swap(arr[l],arr[r]);
        l++;
    r--;
    }

    
    cout<<"reversed array"<<endl;
   for(int i=0;i<n;i++)
   {
      cout<<arr[i]<<" ";
   }
}


int main(){
   vector<int> arr={2,46,6,4,2};
   int n=arr.size();
   reverse(arr,n);
   return 0;
}