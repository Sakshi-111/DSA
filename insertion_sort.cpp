#include <iostream>
using namespace std;
void selectionSort(vector<int>nums){
    for(int i=1;i<nums.size();i++){
        int arr[i]=temp;
        for(int j=i-1;j>0;j--){
            if(nums[j-1]>temp){
                nums[j+1]=nums[j];
               
            }
            else{
                break;
            }
            nums[j]=temp;
        }
}
