class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int,int> mp;
        for(int i:nums){
            mp[i]++;
        }
        int maxi = INT_MIN;
        int ans;
       for(auto &it : mp) {
        if(it.second > maxi) {
            maxi = it.second;
            ans = it.first;
        }
      }
      return ans;
    }
};