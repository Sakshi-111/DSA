#include <bits/stdc++.h>
using namespace std;

// int pivot(vector<int>arr,int size){
//     int start=0;
//     int end=size-1;
//     int mid= start+(end-start)/2;
//     while(start<end){
//         if(arr[mid]>=arr[0]){
//             start=mid+1;
//         }
//         else{
//             end=mid;

//         }
//         mid=start+(end-start)/2;
       
//     }
//     return start;
    
// }
// int binarysearch(vector<int>arr,int stt,int en,int key){
//     int start=stt;
//     int end=en;
//     int mid= start+(end-start)/2;
   
//     while(start<=end){
    
//      if(arr[mid]==key){
//     return mid;
//     } 
//     else if (arr[mid]>=key){
//         end=mid-1;
//     }
//     else{
//         start=mid+1;
//     }
//       mid= start+(end-start)/2;
    
//      }
//        return  -1;
// }

// int search(vector<int>& arr, int n, int k)
// { int pivott=pivot(arr,n);

//           if(k==arr[pivott]){
//     return pivott;
//           } else if ((k >= arr[pivott]) && (k  <= arr[n - 1])) {
//     return binarysearch(arr, pivott, n - 1, k);
//           } else {
//     return binarysearch(arr, 0, pivott - 1, k);
//           }
//           return -1;

// }
int main(){
    int n;
    cout<<"hello";
    cin>>n;
}