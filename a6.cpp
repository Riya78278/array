//Max Consecutive Bit

#include<iostream>
using namespace std;

class Solution {
  public:
    int maxConsecBits(vector<int> &arr) {
        // code here
        if(arr.size()==0){
            return 0;
        }
        int maxi=1;
        int count=1;
        int nums=arr[0];
        for(int i=1;i<arr.size();i++){
            if(nums==arr[i]){
                count++;
                maxi=max(maxi,count);
            }
            else{
                count=1;
                nums=arr[i];
            }
        }
        return maxi;
        
    }
};
