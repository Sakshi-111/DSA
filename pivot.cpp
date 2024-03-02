#include <bits/stdc++.h>
using namespace std;
int pivottt(int arr[],int size){
    int start=0;
    int end=size-1;
    
    while(start<end){
        int mid= start+(end-start)/2;
         if(arr[mid-1]<arr[mid]  && arr[mid]>arr[mid+1]){
         return mid;
         }
         else if(arr[mid]<arr[0]){
           end=mid-1;
        }
        else{
            start=mid;

        }
        mid=start+(end-start)/2;
    }
    return start;
    
}

int main(){
    int arr[9]={8,9,10,1,2,3,4,5,6};
    cout<<pivottt(arr,9)<<endl;
}
