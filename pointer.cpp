#include<iostream>
using namespace std;

int main(){
//     int num=7;
//     int *ptr=&num;
//     // address of num;
//     cout<<ptr<<endl; 
//     cout<<&num<<endl; 
//     //value of num
//     cout<<*ptr<<endl;
//     cout<<num<<endl;

//     // address of ptr
//     cout<<&ptr<<endl;

// // incrememnts value of num by 1 because *ptr= 7 and num=7
// *ptr=*ptr+1;
//   cout<<*ptr<<endl;
// //points to address of num+4 bytes for int .
//    ptr=ptr+1;
//    cout<<ptr<<endl;

// pointer and array


//    int arr[10]={1,3,3,4,5};
//same result 1 because arr= &arr[0]
//    int *ptrr=&arr[0];
//    int *p=arr;
//    cout<<*p<<endl;
//    cout<<*ptrr<<endl;

// pointer and char array

char arr[10]="abcde";
char *ptrr=arr;

//both print abcde becasue arr and ptr hold starting address and print starting from that adress
//till \0 is reached .
cout<<ptrr<<endl;
cout<<arr<<endl;
// prints first character a.
cout<<*ptrr<<endl;

// gives a+1= 97+1=98
cout<<*ptrr+1<<endl;
//gives value at address ptr+1. gives b .
cout<<*(ptrr+1);

//pointers and functions .
// in functions variables are passed by value meaning , copy of variable is passed .
// in functions when array is passed to the function by its name , its starting address is passed so 
// it is passed by refrence .
// if a function has parameter void sumarr(int arr[], size) 
//it is same as void sumarr(int *arr,size)

    return 0;

   

}