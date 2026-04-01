//Two Sum - Pair with Given Sum

#include<iostream>
#include<set>

using namespace std;

class Solution {
  public:
    bool twoSum(vector<int>& arr, int target) {
        // code here
        if(arr.size()<2){
            return false;
        }
        set<int>st;
        for(int i=0;i<arr.size();i++){
            int ans=target-arr[i];
            if(st.find(ans)!=st.end()){
                return true;
            }
            st.insert(arr[i]);
        }
        return false;
    }
};
