#include <iostream>
using namespace std;
#include <map>
// int main(){
//     int n;
//     cin>>n;
//     int arr[n];
//     map<int,int>mpp;

//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//         mpp[arr[i]]++;
      

//     }
//     cout<<"enter appearesnces";
//     int appearences;
//     cin>>appearences;
//     while(appearences>=0){
//         int number;
//         cin>>number;
//         cout<<mpp[number];
//         appearences--;
//     }
// }
int main(){
    map<int,int>mpp;
    for(int i=0;i<4;i++){
        int x;
        cin>>x;
        mpp[x]++;
    }
    for(auto i:mpp){
        
        cout<<i.first<<"->";
        cout<<i.second<<" ";

    }
}
