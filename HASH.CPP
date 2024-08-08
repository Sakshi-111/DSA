#include <iostream>
using namespace std;
#include<vector>
// vector <int> arr_countnums(vector <int> arr,int size){
//     vector<int>ar;
//     vector<bool>visited(size,false);
//     for(int i=0;i<size;i++){
//         if(visited[i]){
//             continue;}


    
//     int count = 1;
//     for (int j=i+1;j<size;j++){
//         if(arr[i]==arr[j]){
//             visited[j]=true;
//              count++;
//              }  
//     }
//     ar.push_back(count);}
//     return ar;
     
// }
//  int main(){
//     vector<int> arr={1,2,3,1,3};
//     vector<int> result= arr_countnums(arr,5);
//     for(auto i: result){
//         cout<<i;
//     }
//     return 0;  
//  }

//using hashing
// vector<int> countfrequency(vector<int> arr,int size){
// vector<int>hasharray(size,0);
// for(int i=0;i<size;i++){
//     hasharray[arr[i]]++;
// }
// return hasharray;
// }
//  int main(){
//     vector<int> arr={1,2,3,1,3};
//     vector<int> result=countfrequency (arr,5);
//     for(auto i: result){
//         cout<<i;
//     }
//     return 0;  
//  }
//  int main(){
//     string s;
//     cin>>s;
//     //precompute
//     int hash[26]={0};
//     for(int i=0;i<s.size();i++){
//         hash[s[i]-'a']++;
//     }
//     int q;
//     cin>>q;
//     while(q--){
//         char c;
//         cin>>c;
//         cout<<hash[c-'a'];

//     }
//  }
// int main(){

//     string s;
//     cin>>s;
//     //precompute
//     int hash[256]={0};
//     for(int i=0;i<s.size();i++){
//         hash[s[i]]++;
//         }

//     int num;
//     cin>>num;
//     while(num--){
//         char c;
//         cin>>c;
//         cout<<hash[c];
//     }
// }