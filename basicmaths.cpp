#include <iostream>
#include <vector>
using namespace std;
// bool primenumber(){
//     cout<<"enter number to be checked for prime";
//     int n;
//     cin>>n;
//     for(int i=2;i< n;i++)
//         if(n%i==0){
//             return 0;
//         }
 
//     }
//     return 1;

// }
// int main(){
//     bool p=primenumber();
//     if (p){
//         cout<<"prime";
//     }
//     else{
//         cout<<"not prime";
//     }
   
// }
// class Solution {
// public:
//     int countPrimes(int n) {
//         int count=0;
//         if(n<=1){
//             return 0;
//         }
//     for(int i=2;i<n;i++){
//        if( for(int j=2;j<i;j++){
//             if (i%j==0){
//                  false;
//             } 
//         }
//          true){
//             count++;
//         } 
//     }
//     return count;
//     }

// };

// class Solution {
// public:
//     int countPrimes(int n) {
//         int count = 0;
//         if (n <= 1) {
//             return 0;
//         }
//         for (int i = 2; i < n; i++) {
//             bool isPrime = true;
//             for (int j = 2; j * j <= i; j++) {
//                 if (i % j == 0) {
//                     isPrime = false;
//                     break;
//                 }
//             }
//             if (isPrime) {
//                 count++;
//             }
//         }
//         return count;
//     }
// };

// int main() {
//     Solution solution;
//     int n;
//     cout << "Enter a number: ";
//     cin >> n;
//     int count = solution.countPrimes(n);
//     cout << "Count of prime numbers less than " << n << ": " << count << endl;
//     return 0;
// }

//sieve of erasthenes
// class Solution {
//     private:
    
    
//     public:

//     int countprimes(int n){
//         int count=0;
//          vector<bool> isPrime(n+1,true);
//          isPrime[0]=isPrime[1]=false;
//         for(int i=2;i<n;i++){
           
            
//             if(isPrime[i]){
//                 count++;
//                 for(int j=2*i;j<n;j+=i){
//                     isPrime[j]=0;
//                 }
//             }

            


//         }
//         return count;
//     }
// };
// int main(){
//     Solution solution;
//      int num= solution.countprimes(3);
// }


// void selectionSort( vector <int>&arr, int n)
// {   
//     for(int i=0;i<n-1;i++){
//             int mini=i;
//             for(int j=i+1;j<n;j++){
//                 if(arr[j]<arr[mini]){
//                    mini=j;
//                 }

//             }
//             swap(arr[mini],arr[i]);

//         }
     
// }
// void bubblesort(vector<int>&nums,int size){
//     for(int i=1;i<size;i++){
//         for(int j=0;j<size-i;j++){
//            if(nums[j]>nums[j+1]){
//             swap(nums[j], nums[j +1]);
//            } 
//         }

// }
// }
// int main(){
//     vector<int>nums={1,5,7,2,4,3};
//     int sizee=nums.size();
//     bubblesort(nums,sizee);
//     for(int i=0;i<sizee;i++){
//         cout<<nums[i]<<" ";
// }
// }

