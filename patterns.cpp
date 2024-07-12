#include <iostream>
using namespace std;
// int main(){


// int n;
// cin>>n;
// for (int i=0;i<n;i++){
// for(int j=0;j<n;j++){
//     cout<<"*";
// }
// cout<<endl;
// }
// }
// void pSN(int n){ 
// int count=1;
// for (int i=0;i<n;i++){
//     for(int j=0;j<n;j++){
//     cout<<count <<" ";
//     count ++;
// }
// cout<<endl;
// }
// }
// void pattern3(int row){
//     int count = 1;
//     for (int i = 0; i < row; i++){
//         for (int j = 0; j<count;j++){
//             cout<<count<< " ";
//         }
//         count++;
//         cout<<endl;
//     } 
// }
// void pattern4(int num){
//     int count = 1;
//     for (int i = 0; i < num; i++){
//         for(int j=0;j<=i;j++){
//             cout<<count<<" ";
//             count++;
//         }
//         cout<<endl;
// }
// }
// void pattern5(int num){
//     for (int i=1;i<=num;i++){
//         int count=i;
//         for (int j=1;j<=i;j++){
//             cout<<count<< " ";
//             count--;
//     }
//     cout<<endl;
// }
// }
// void pattern6(int num){
   
//     for (int i=1;i<=num;i++){
        
//         for(int j=0;j<num;j++){
//              char s='A'+i-1;

//             cout<< s << " "; // or cout <<s+row-1

//         }
//         // s++;
//         cout<<endl;
//     }
// }
// void pattern6(int num){
//    char s='A';
//     for (int i=1;i<=num;i++){
        
//         for(int j=0;j<num;j++){
//               cout<< s << " "; 

//         }
//          s++;
//         cout<<endl;
//     }
// }
// void pattern7(int num){
//     char s= 'A';
//     for (int i=1;i<=num;i++){
        
//        for(int j=0;j<num;j++){
//         cout<<s<< " ";
//         s++;
//        }
//        cout<<endl;

// }}
// void pattern6(int num){
    
//     for(int i=1;i<=num;i++){
//         for(int j=1;j<=i;j++){
//          char C= 'A'+i+j-2;
//          cout<<C<< " ";

//         }
// cout<<endl;
//     }
// }
// void pattern7(int n){
//     for(int i=1;i<=n;i++)
//     {
//         for(int j=1;j<=i;j++){
//             char c='A'-i+j+3;
//             cout<<c<<" ";
//         }
//         cout<<endl;
// }
// }
// void pattern7(int n){
//     for(int i=1;i<=n;i++){
//         char c='A' +n-i;
//         for(int j=1;j<=i;j++){
//             cout<<c<<" ";
//             c++;
//         }
//         cout<<endl;
// }
// }
// void pattern8(int n){
//     for(int i=0;i<n;i++){
//         char c='A'+i;
//         for(int j=1;j<=n;j++){
//             cout<<c<<" ";
//             c++;
//         }
//         cout<<endl;
// }
// }
// void pattern9(int n){
//     for(int i=1;i<=n;i++){
//         for(int j=1;j<=n-i;j++){
//             cout<<"  ";
//         }
//         for (int k=0;k<i;k++){
//         cout<<"* ";
//         }
//         cout<<endl;
//     }
    
// }
// void pattern9(int n){
//     for(int i=0;i<n;i++){
//         for(int j=0;j<n-i;j++){
//             cout<<"*";
//         }
        
//         cout<<endl;
//     }
    
// }
// void pattern9(int n){
//     for(int i=0;i<n;i++){
//         for(int j=0;j<i;j++){
//             cout<<"  ";
//         }
//         for (int k=0;k<n-i;k++){
//         cout<<"* ";
//         }
//         cout<<endl;
//     }
    
// }
// void pattern10(int n){
//     int m=(n*2)-1;
//     int j;
   
//     for(int i=1;i<=n;i++){
//          int num=1;
//         for(int j=1;j<=m;j++){
//            for(int k=0;k<n-i;k++){
//             cout<<"  ";
//            }
//            for(int w=n-i;w<=n;w++){
//             cout<<num<<' ';
//             num++;
//            }
//            int numm=1;
//            for(int q=n+i-1;q<m-(n+i);q++){
//             cout<<numm<<" ";
//             numm++;
//            }
// cout<<endl;
           
            

        } 
        
        
     

    } 
}



int main(){
    pattern10(5);
    return 0;
}