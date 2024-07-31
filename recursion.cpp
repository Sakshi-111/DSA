#include <iostream>
using namespace std;

//In a Recursive function three things are mandatory 
//1. BAse case with a return statement is important to be written in function becase it removes segmentation fault that stops the function from being infinite and using all the memory .
//2. recursive relation .
//3. processing part


/* BASE CASE 
   PROCESSING
   RECURSIVE RELATION
   tail recursion
*/
/* BASE CASE
   RECURSIVE RELATION
   PROCESSING
   head recursion  */

// int factorial(int num){
//     if(num==0){
//         return 1;
//     }
//     return num*factorial(num-1);
// }
// int main(){
//     int n;
//     cout<<"enter number to be found factorial of ";
//     cin>>n;
//     int ans= factorial(n);
//    cout<<ans;
//    return 0;
// }

// int fib(int num)
// {
//     if(n==0){
//         return 0;
//     }
//     if(n==1){
//         return 1;
//     }
//     return fib(n-1)+fib(n-2);
// }

// void saynum(int num){
//     string arr[10]={"one","two","three","four","five","six","seven","eight","nine","ten"};
//     if(num==0){
//         return 0 ;}
//         int digit=num%10;
//        num=num/10;
//         saynum(num);
//          cout<<arr[digit-1];
        
// }
// int main(){
//     cout<<saynum(345);
//     return 0;
// }

// bool ifsorted(int arr[],int size){

//     if(size==1 || size==0){
//         return true;
// }
// else if(arr[0]>arr[1]){
//         return false;
// }
// else{
//     bool ans= ifsorted(arr+1,size-1);
//     return ans;
// }
// }
// int main(){
//     int arr[]={1,2,3,4,5};
//     int size= sizeof(arr)/sizeof(arr[0]);
    
//     bool ans= ifsorted(arr,size);
    
//     cout<<ans;
//     return 0;
// }
// int sum(int arr[],int size){
   
//     if(size==0){
//         return 0;
        
// }
// if(size==1){
//     return arr[0];
// }


//     int ans=arr[0]+sum(arr+1,size-1);
//     return ans;
// }
// int main(){
//     int arr[]={1,2,3,4,5};
//     int size= sizeof(arr)/sizeof(arr[0]);
//     int ans= sum(arr,size);
//     cout<<ans;
//     return ans;
// }

// bool linearsearch(int arr[],int size,int target ){
//     if(size==0){
//         return false;

//     }
//     if(arr[0]==target){
//         return true;
//     }
//     int ans= linearsearch(arr+1,size-1,target);
//     return ans;
    
    


// }
// int main(){
//     int arr[7]= {1,2,3,4,5,6,7};
//     bool ans=linearsearch(arr,7,8);
//     if(ans){
//         cout<<"found";
//     }
//     else{
//         cout<<"not found";
//     }
//     return 0;

// }

// bool binarysearch(int arr[],int start,int end,int target){
//      int mid= start+(end-start)/2;
//      if(start>end){
//     return 0;
// }
// if (arr[mid]==target){
//     return true;
// }
// else if(arr[mid]>target){
//   return binarysearch(arr,start,mid-1,target);
// }
// else{
//     return binarysearch(arr,mid+1,end,target);
// }
//     }
   


// int main(){
//     int arr[8]={1,2,3,4,5,6,7,8};
//     if(binarysearch(arr,0,7,4)){
//         cout<<"found";
//     }
//     return 0;
// }

// void rever(string &s,int i,int j){
    
//     if(i>j){
//         return;
//     }
   
//         swap(s[i],s[j]);
//         i++;
//         j--;
    
//     rever(s,i,j);

// }
// int main(){
//     string s="hello";
//     rever(s,0,s.length()-1);
//     cout<<s;
//     return 0;
// }
// bool checkpalindrome(string s ,int i,int j){
// if(i>j){
//         return true;
// }
// if(s[i]!=s[j]){
//     return false;
// }
// i++;
// j--;
// checkpalindrome(s,i,j);
// }
// int main(){
//     string s ="naman";
//     if(checkpalindrome(s,0,s.length()-1)){
//         cout<<"yes";
// }
// else{
//     cout<<"no";
// }
// return 0;
// }
