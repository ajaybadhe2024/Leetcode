class Solution {
public:
    int trap(vector<int>& height) {
        int h=height.size();
        int ans=0;
        int l=0;
        int r=h-1;
        int lmax=0;
        int rmax=0;
        while(l<r){
            lmax=max(lmax,height[l]);
            rmax=max(rmax,height[r]);
            if(lmax<rmax){
                ans+=lmax-height[l];
                l++;
            }else{
                ans+=rmax-height[r];
                r--;
            }
        }
        return ans;
    }
};