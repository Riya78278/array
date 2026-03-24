//Longest Subarray with Sum K
#include<iostream>
#include<map>

using namespace std;

class Solution {
  public:
    int longestSubarray(vector<int>& arr, int k) {
        map<int,int> mp;
        int presum = 0;
        int maxi = 0;

        mp[0] = -1; // important

        for(int i = 0; i < arr.size(); i++){
            presum += arr[i];

            // check if (presum - k) exists
            if(mp.find(presum - k) != mp.end()){
                int len = i - mp[presum - k];
                maxi = max(maxi, len);
            }

            // store only first occurrence
            if(mp.find(presum) == mp.end()){
                mp[presum] = i;
            }
        }

        return maxi;
    }
};