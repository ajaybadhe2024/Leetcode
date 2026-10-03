class Solution {
public:


void merge(vector<int>& nums,int st,int mid,int end){
    vector<int>ans;
    int left=st;
    int right=mid+1;
    while(left<=mid&&right<=end){
        if(nums[left]<nums[right]){
            ans.push_back(nums[left]);
            left++;
        }else{
            ans.push_back(nums[right]);
            right++;
        }
    }

    while(left<=mid){
        ans.push_back(nums[left]);
        left++;
    }

    while(right<=end){
        ans.push_back(nums[right]);
        right++;
    }


    for(int i=0;i<ans.size();i++){
        nums[i+st]=ans[i];
    }

}
    void mergesort(vector<int>& nums,int st,int end){
        if(st>=end){
            return ;
        }
        int mid=st+(end-st)/2;
        mergesort(nums,st,mid);
        mergesort(nums,mid+1,end);
        merge(nums,st,mid,end);
    }
    vector<int> sortArray(vector<int>& nums) {
        int n=nums.size();
        int st=0;
        int end=n-1;
        mergesort(nums,st,end);

        return nums;
    }
};