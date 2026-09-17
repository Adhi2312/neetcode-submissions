class Solution {
public:
    void moveZeroes(vector<int>& nums) {
         int j=0;
        for(int i=0;i<nums.size();i++)
        {
          if(nums[i]!=0)
          {
            while(j<i&&nums[j]!=0)j++;
            swap(nums[i],nums[j]);
          }
        }
        
    }
};