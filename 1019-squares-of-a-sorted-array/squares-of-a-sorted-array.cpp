class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int n=nums.size();
        vector<int>v;
        for(int i=0;i<n;i++){
            int ans=abs(nums[i]);
            int result=ans*ans;
            v.push_back(result);
        }
        sort(v.begin(),v.end());
    return v;
    }
};