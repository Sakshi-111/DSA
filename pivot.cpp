#include <bits/stdc++.h>
using namespace std;
//pivot using binary search in a sorted rotated array  minimum elmt

// int pivott(int arr[],int size){
//     int start=0;
//     int end=size-1;
//     int mid= start+(end-start)/2;
//     while(start<end){
//         if(arr[mid]>arr[0]){
//             start=mid+1;
//         }
//         else{
//             end=mid;

//         }
//         mid=start+(end-start)/2;
       
//     }
//     return start;
    
// }
// int main(){
//     int arr[7]={8,9,10,1,5,6,7};
//     cout<<pivott(arr,7)<<endl;
// }
// pivot element is foound in a sorted and then rotated array so that  to find a target value , 
//binary search can be applied in a single branch whose range is from pivot elemr=ent to n-1 or 
// from 0 to pivot element 
//pivot using binary search in a sorted rotated array   maximum elmt
// /
// int pivottt(int arr[],int size){
//     int start=0;
//     int end=size-1;
    
//     while(start<end){
//         int mid= start+(end-start)/2;
//          if(arr[mid-1]<arr[mid]  && arr[mid]>arr[mid+1]){
//          return mid;
//          }
//          else if(arr[mid]<arr[0]){
//            end=mid-1;
//         }
//         else{
//             start=mid;

//         }
//         mid=start+(end-start)/2;
//     }
//     return start;
    
// }

// int main(){
//     int arr[9]={8,9,10,1,2,3,4,5,6};
//     cout<<pivottt(arr,9)<<endl;
// }
