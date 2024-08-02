// #include <iostream>
// using namespace  std;
// int partition(int arr[],int s,int e){
//     int pivot=arr[s];
//     int cnt=0;
//     for(int i=s+1;i<=e;i++){
//         if(arr[i]<=pivot){
//             cnt++;
//     }
//     }
//     int pivotindex=s+cnt;
//     swap(arr[s],arr[pivotindex]);
//     int i=s;
//     int j=e;
//     while(i<pivotindex && j>pivotindex ){
//         while(arr[i]<arr[pivotindex]){
//             i++;
//         }
//         while(arr[j]>arr[pivotindex]){
//             j--;
//         }
//          if(i<pivotindex && j>pivotindex ){
//             swap(arr[i++],arr[j--]);
//          }
//     }
        
//          return pivotindex;
  
// }
// void qs(int arr[],int s,int e){
//     if(s>=e){
//         return;
//     }
//     int p=partition(arr,s,e);
//     qs(arr,s,p-1);
//     qs(arr,p+1,e);
// }
// int main(){
//     int arr[8]={1,4,5,6,32,3,2,1};
//     int n=sizeof(arr)/sizeof(arr[0]);
//     qs(arr,0,n-1);
//     for(int i=0;i<n;i++){
//         cout<<arr[i]<<" ";

//     }
//     return 0;
// }

