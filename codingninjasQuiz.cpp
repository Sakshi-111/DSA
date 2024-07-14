// pair<int, int> absDiff(vector<int>& arr, int n)
// {
// 	vector<int>evens;
//     vector<int>odds;
//     for(int i=0;i<arr.size();i++){
//         if(i%2==0){
//             evens.push_back(arr[i]);
//         }
//         else{
//             odds.push_back(arr[i]);
//         }
//     }
//     int evenDiff=0;
//     int oddDiff=0;
//     for(int i=1;i<evens.size();i++){
//         evenDiff= evenDiff+(abs(evens[i]-evens[i-1]));

//     }
    
//     for(int j=1;j<odds.size();j++){
//         oddDiff= oddDiff+(abs(odds[j]-odds[j-1]));
//     }
    
//     return {oddDiff,evenDiff};
// }