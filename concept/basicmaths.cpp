#include <iostream>
using namespace std;
bool primenumber(){
    cout<<"enter number to be checked for prime";
    int n;
    cin>>n;
    for(int i=2;i< n;i++){
        if(n%i==0){
            return 0;
        }
 
    }
    return 1;

}
int main(){
    bool p=primenumber();
    if (p){
        cout<<"prime";
    }
    else{
        cout<<"not prime";
    }
   
}