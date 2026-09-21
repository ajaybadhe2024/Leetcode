class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n=nums.size();
        int count=0;
        int maj;
        for(int i=0;i<n;i++){
            if(count==0){
                maj=nums[i];
                count++;
            }else if(maj==nums[i]){
                count++;
            }else{
                count--;
            }
        }
        return maj;
    }
};