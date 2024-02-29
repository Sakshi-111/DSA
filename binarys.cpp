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
//return -1;
// }
// int main(){
//     int arri[8]={1,2,3,4,5,6,7,8};
//     int size=8;
//     int s=binarysearch(arri,8,4);
//     cout<<s;
// }


/*interview questions*/
int firstocc(int arr[],int size,int key){
    int start=0;
    int end=size-1;
    int mid=start+ (end-start)/2;
    int ans=-1;
    while(start<=end){
        if(arr[mid]==key){
             ans=mid;
            end=mid-1;
        }
        else if(arr[mid]>key){
            end=mid-1;
        }
        else{start=mid+1;}
         mid=start+(end-start)/2;
    }
    
    return ans;
}
int lastocc(int arr[],int size, int key){
    int start =0;
    int end=size-1;
    int mid=start+(end-start)/2;
    int ans=-1;
    while(start<=end){
        if(arr[mid]==key){
            ans=mid;
            start=mid+1;

        }
        else if(arr[mid]>key){
            end=mid-1;
        }
        else{start=mid+1;}
        mid=start+(end-start)/2;
    }
    return ans;
}
int main(){
    int arr[5]={1,2,3,3,4};
   cout<< firstocc(arr,5,3);
   cout<< lastocc(arr,5,3);
}