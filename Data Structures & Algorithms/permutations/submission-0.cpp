class Solution {
public:
    vector<vector<int>>vec;
    unordered_map<int,int>mp;
    void solve(vector<int>&nums,vector<int>&curr,int i)
    {
        if(i==nums.size())
        {
            vec.push_back(curr);
            return;
        }
        for(int j=0;j<nums.size();j++)
        {
            if(mp[j] < 1)
            {
                curr[i]=nums[j];
                mp[j]++;
                solve(nums,curr,i+1);
                mp[j]--;
                
            }
        }
    }
    vector<vector<int>> permute(vector<int>& nums) {
vector<int> curr(nums.size());
solve(nums, curr, 0);
return vec;
        
    }
};
