// Remove Duplicates Sorted Array
#include<iostream>
using namespace std;

class Solution {
  public:
    vector<int> removeDuplicates(vector<int> &arr) {
        // code here
        vector<int>ans;
        int i=0;
        ans.push_back(arr[i]);
        for(int j=1;j<arr.size();j++){
            if(arr[i]!=arr[j]){
                arr[i+1]=arr[j];
                ans.push_back(arr[i+1]);
                i++;
            }
        }
        return ans;
    }
};