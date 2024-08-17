#include <bits/stdc++.h>
using namespace std;
// class stack{
//     public:
//     int size;
//     int *arr;
//     int top;
//     stack(int size){
//         this->size=size;
//           arr= new int[size];
//           int top=-1;

//     }
//     void push(int data){
//         if(top<size-1){
//             top++;
//             arr[top]=data;
//         }
//         else{
//             cout<<"stackoverflow<<endl;"
//         }
//     }
//     void pop(){
//         if(top>=0 && top<size){
//             top--;
//         }
//         else{
//             cout<<"underflow"<<endl;
//     }
//     }
//     int top{
//         if(top>=0 && top<size){
//             cout<<arr[top];}
    
//     else{
//         cout<<"stack is empty"<<endl;
//         return -1;
//     }

//     }
//     bool empty{
//         if(top==-1){
//             return true;
//         }
//         else{
//             return false;
//         }
//     }


  

// }


//reverse string
void reverseString(){
    string str = "uuuuuhh";
    stack<char>s;
    for(int i=0;i<str.length();i++){
        s.push(str[i]);
    }
    string ans="";
    while(!s.empty()){
        char ch= s.top();
        ans.push_back(ch);
        s.pop();
        
    }
    cout<<ans;
    
}
