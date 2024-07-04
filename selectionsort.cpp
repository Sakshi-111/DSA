#include <iostream>
using namespace std;

int arrayOutput(int arr[], int size)
{
    for (int i = 0; i < size; i++){
        cout<<arr[i]<< " ";
    }
}
void slsrt(int arr[], int sizeofarr){
   
for(int i=0;i<sizeofarr-1;i++){
    int mini = i;
    for(int j=i+1;j<sizeofarr;j++){
    if ( arr[j]<arr[mini]){
    
       mini= j;} 
   
} 
swap(arr[i],arr[mini]);
}
}

int main(){
    int arr[9]={1,2,3,4,5,6,7,8,0};
    slsrt(arr,9);
    arrayOutput(arr,9);

}
