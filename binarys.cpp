#include <bits/stdc++.h>
using namespace std;
int binarysearch(int arr[],int size, int key){
int start=0;
int end=size-1;
int mid=(start +end)/2;
while(start<=end){
    if( arr[mid]=key){
        return mid;
    }
    else if(arr[mid]>key){

        end=mid-1;
    }
    else{
        start=mid+1;
    }
    return 0;
}
}
int main(){
    int arri[8]={1,2,3,4,5,6,7,8};
    int size=8;
    int s=binarysearch(arri,8,4);
    cout<<s;
}