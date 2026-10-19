class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int n=nums.size();
        if(n==0){
            return 0;
        }
        unordered_set<int>st;
        for(int i=0;i<n;i++){
            st.insert(nums[i]);
        }
        int longest=1;
    
       
        for(auto it:st){
            if(st.find(it-1)==st.end()){
                int curr=it;
              int  cnt=1;
                while(st.find(curr+1)!=st.end()){
                    curr++;
                    cnt++;
                }
                  longest=max(longest,cnt);
            }
        }
        return longest;
    }
};