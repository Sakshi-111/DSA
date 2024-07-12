
#include <iostream>
using namespace std;

//  void PrintArray(int arr[],int size){
//     for(int i=0;i<size;i++){
//         cout<<arr[i]<<" ";
//     }
//     cout<<endl;
 
//  }
// bool linear_search(int arr[],int size, int key){
//     for(int i=0;i<size;i++){
//         if(arr[i]==key){
//             return 1;
//         }
//     }
// }
// void ReverseArray(int arr[], int size){
//      int start=0;
//      int end=size-1;
//       while(start<end){
//         swap(arr[start],arr[end]);
//         start=start+1;
//         end=end-1;}    
// }


int main(){
    int arr[5]={1,2,3,4,5};

     ReverseArray(arr,5);
    PrintArray(arr,5);
    return 0;

}