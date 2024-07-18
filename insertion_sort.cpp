#include <iostream>
using namespace std;
void selectionSort(vector<int>nums){
    for(int i=1;i<nums.size();i++){
        int temp=arr[i];
        int j=i-1
        for(;j>0;j--){
            if(nums[j]>temp){
                nums[j+1]=nums[j];
               
            }
            else{
                break;
            }
            
        }
        nums[j+1]=temp;
}
