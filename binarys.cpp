 #include <bits/stdc++.h>
using namespace std;
// int binarysearch(int arr[],int size, int key){
// int start=0;
// int end=size-1;
// int mid=start +(start-end)/2;
// while(start<=end){
//     if( arr[mid]=key){
//         return mid;
//     }
//     else if(arr[mid]>key){

//         end=mid-1;
//     }
//     else{
//         start=mid+1;
//     }
//     mid=start +(start-end)/2;
// }
// return -1;
// }
// int main(){
//     int arri[8]={1,2,3,4,5,6,7,8};
//     int size=8;
//     int s=binarysearch(arri,8,4);
//     cout<<s;
// }


// /*interview questions*/
// int firstocc(int arr[],int size,int key){
//     int start=0;
//     int end=size-1;
//     int mid=start+ (end-start)/2;
//     int ans=-1;
//     while(start<=end){
//         if(arr[mid]==key){
//              ans=mid;
//             end=mid-1;
//         }
//         else if(arr[mid]>key){
//             end=mid-1;
//         }
//         else{start=mid+1;}
//          mid=start+(end-start)/2;
//     }
    
//     return ans;
// }
// int lastocc(int arr[],int size, int key){
//     int start =0;
//     int end=size-1;
//     int mid=start+(end-start)/2;
//     int ans=-1;
//     while(start<=end){
//         if(arr[mid]==key){
//             ans=mid;
//             start=mid+1;

//         }
//         else if(arr[mid]>key){
//             end=mid-1;
//         }
//         else{start=mid+1;}
//         mid=start+(end-start)/2;
//     }
//     return ans;
// }

//peak index in a mountain array
// int peak(int arr[],int size){
//     int start=0;
//     int end=size-1;
//     int mid=start+(end-start)/2;
//     while(start<end){
//         if(arr[mid]<arr[mid+1] ){
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
   
//   cout<<sizeof(arr)/sizeof(int);}
//pivot element
// int pivot(int arr[],int size){
//     int min= arr[0];
//     for(int i=1;i<size;i++){
//         if (arr[i]<min){
//             min=arr[i];
//         }
//     }
//     return min;

// }
// int main(){
//     int arr[7]={1,2,3,4,5,43,0};
//     cout<<pivott(arr,7);
// }
//pivot using binary search in a sorted rotated array  minimum elmt

// int pivott(int arr[],int size){
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
// int main(){
//     int arr[7]={8,9,10,1,5,43};
//     cout<<pivott(arr,7)<<endl;
// }
// pivot element is foound in a sorted and then rotated array so that  to find a target value , 
//binary search can be applied in a single branch whose range is from pivot elemr=ent to n-1 or 
// from 0 to pivot element 
//pivot using binary search in a sorted rotated array   maximum elmt
int pivottt(int arr[],int size){
    int start=0;
    int end=size-1;
    int mid= start+(end-start)/2;
    while(start<end){
        if(arr[mid]>arr[0]){
            start=mid;
        }
        else{
            end=mid-1;

        }
        mid=start+(end-start)/2;
    }
    return start;
    
}

int main(){
    int arr[7]={8,9,10,1,2,3,4};
    cout<<pivottt(arr,7)<<endl;
}
