class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int ans=-9999999;
        int best=-999999;
        for(int x:nums) {
            best=best+x;
            best=max(best,x);
        	ans=max(ans,best);
        }
        return ans;
    }
};