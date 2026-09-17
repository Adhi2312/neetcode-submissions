class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        // sort(nums.begin(),nums.end());
        unordered_map<int,int>mp;
        int rep=0;
        for(int i:nums)
        {
            mp[i]++;
            if(mp[i]>1)
            {
                rep=i;;
            }
        }
        for(int i=1;i<=nums.size();i++)
        {
            if(!mp.count(i))return vector<int>{rep,i};
        }
        return vector<int>{};
        
    }
};