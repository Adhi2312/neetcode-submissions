class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int maxi=INT_MIN;
        int mini=INT_MAX;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]==target)
            {
                mini=min(i,mini);
                maxi=max(i,maxi);
            }
        }
        return maxi==INT_MIN?vector<int>{-1,-1}:vector<int>{mini,maxi};
        
    }
};