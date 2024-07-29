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