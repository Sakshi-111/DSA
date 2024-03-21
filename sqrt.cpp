#include <bits/stdc++.h>
using namespace std;
long long int sqrt_int(int n){
     int start = 0;
    int end=n; 
     
      long long  int ans= -1;
    while(start<=end){
       long long int mid= start+(end-start)/2;
        long long int num=mid*mid;
        if(num==n){
            return mid;
        }
        else if(num>n){
            end=mid-1;
        }
        else{
            start=mid+1;
            ans=mid;
        }
       

    }return ans;
}

int main()
    
{int numb;
cout<<"enter"<<endl;
cin>>numb;

  int ans= sqrt_int(numb);
  cout<<ans;
  return 0;
}