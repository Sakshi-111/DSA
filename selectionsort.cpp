#include <iostream>
using namespace std;
#include<vector>

int arrayOutput(int arr[], int size)
{
    for (int i = 0; i < size; i++){
        cout<<arr[i]<< " ";
    }
}
// void slsrt(int arr[], int sizeofarr){
   
// for(int i=0;i<sizeofarr-1;i++){
//     int mini = i;
//     for(int j=i+1;j<sizeofarr;j++){
//     if ( arr[j]<arr[mini]){
    
//        mini= j;} 
   
// } 
// swap(arr[i],arr[mini]);
// }
// }

//recursion
// void selec(int arr[],int size){
//     if(size==0||size==1){
//         return;
//     }
    
//         int mini=0;
//         for(int j=1;j<size;j++){
//             if(arr[j]<arr[mini]){
//                 mini=j;
//         }
//         }
//          swap(arr[mini],arr[0]);
//          selec(arr+1,size-1);
// }

       



// int main(){
//     int arr[9]={1,2,3,4,5,6,7,2,0};
//     selec(arr,9);
//     arrayOutput(arr,9);

// }
// void bubblesort(int arr[],int n){
//     for(int i=1;i<n;i++){
//        
//         bool swapped=false;
//         for(int j=0;j<n-i;j++){
//             if(arr[j]>arr[j+1]){
//                 swap(arr[j],arr[j+1]);
//                 swapped=true;
//     }
//     if(!swapped){
//         break;
// }

// }
// void bubblesort(int arr[],int n){

//     if(n==1|| n==0){
//         return;
//     }
//     for(int j=0;j<n-1;j++){
//         if(arr[j]>arr[j+1]){
//             swap(arr[j],arr[j+1]);
//     }
//     }
//     bubblesort(arr,n-1);
    


// }

// int main(){
//     int arr[8]={1,5,6,4,3,2};
//     bubblesort(arr,6);
//     arrayOutput(arr,6);
//     return 0;
// }
// void merge(int arr[],int s,int mid,int e){
//     vector<int>temp;
//     int left=s;
//         int right=mid+1;
//     while(left<=mid && right<=e){
        
//         if(arr[left]<=arr[right]){
            
//             temp.push_back(arr[left]);
//             left++;
//         }
//         else{
//             temp.push_back(arr[right]);
//             right++;

//         }

//     }
//     while (left <= mid) {
//         temp.push_back(arr[left]);
//         left++;
//     }

//     while (right <= e) {
//         temp.push_back(arr[right]);
//         right++;
//     }

//     for (int i = s; i <= e; i++) {
//         arr[i] = temp[i-s];
//     }
    
// }

// void mergesort(int arr[],int s,int e){
//     if(s>=e){
//         return;
//     }
//     int mid=(s+e)/2;
//     mergesort(arr,s,mid);
//     mergesort(arr,mid+1,e);
//     merge(arr,s,mid,e);
// }
// int main(){
//     int arr[6]={1,4,6,5,32,1};
//     mergesort(arr,0,5);
//     for(int i=0;i<6;i++){
//         cout<<arr[i]<<" ";
//     }
//     return 0;
   
   
// }