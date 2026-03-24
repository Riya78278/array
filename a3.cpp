//Move All Zeroes to End
#include<iostream>
using namespace std;

class Solution {
  public:
    void pushZerosToEnd(vector<int>& arr) {
        // code here
        int i=0;
        for(int j=0;j<arr.size();j++){
            if(arr[j]!=0){
                swap(arr[j],arr[i]);
                i++;
            }
        }
    }
};