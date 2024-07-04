#include <iostream>
using namespace std;
void bubbleSort(int arr[],int n){
    for (int i=0;i<n-2;i++){
        for(int j=n-2; j=0;j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
            }
        }
    }
}