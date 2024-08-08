// #include <iostream>
// using namespace std;
// #include <vector>

// int printRowWise(int arr[][4],int row,int col){
//     for(int i=0;i<row;i++){
//     for(int j=0;j<col;j++){
//         cout<<arr[i][j]<< " ";
// }
// cout<<endl;

// }
// }

// //linear search in 2-d array
// bool linearsearch(int arr[][4],int target ,int row ,int col){
//     for(int i=0;i<row;i++){
//         for(int j=0;j<col;j++){
//             if(arr[i][j]==target){
// return 1;        }
//     }

// }
// return 0;}

// vector<int> rowsum(int arr[][4],int row,int col){
    
//     vector<int> SumArr;
//     for(int i=0;i<row;i++){
//         int sum=0;
//         for(int j=0;j<col;j++){
//             sum=sum+ arr[i][j];
// }
// SumArr.push_back(sum);
//     }
//     return SumArr;

// }
// int main(){
// int arr[3][4]={1,2,3,4,5,6,7,8,9,10,11,12};
// printRowWise(arr,3,4);
// int key;
// cin>>key;
// if(linearsearch(arr,key,3,4)){
//     cout<<"found"<<endl;

// }
// else{
//     cout<<"not found"<<endl;
// }
// vector<int> SumArr=rowsum(arr,3,4);
// for(int i=0;i<SumArr.size();i++){
//     cout<<SumArr[i]<<" ";
// 
// int s= 2&1;    
// cout<<s;

//     return 0;

// }
#include <bits/stdc++.h> 
vector<int> addOneToNumber(vector<int> arr)
{
   int size=arr.size();
arr[size-1]=arr[size-1]+1;
vector<int>newarr;
int cnt=0;


    // Write your code here
    for(auto i:arr){
        if(arr[i]==0&& cnt==0){
            continue;

        }
        newarr.push_back(arr[i]);
        cnt+=1;


    }
}

