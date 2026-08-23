class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int>mp;
        int n=nums.size();
        for(int i=0;i<n;i++){
            int curr=nums[i];
        int remain=target-curr;
        if(mp.find(remain)!=mp.end()){
            return {mp[remain],i};
        }else{
            mp[curr]=i;
        }
        }
        return {-1,-1};
    }
};