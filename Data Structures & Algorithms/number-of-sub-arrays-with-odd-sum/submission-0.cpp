class Solution {
public:
    int numOfSubarrays(vector<int>& arr) {
        int odd=0;
        int count=0;
        int even=0,prefix=0;
        for(int i:arr)
        {
            prefix+=i;
            
            if(prefix%2==0){even++;count+=odd;}
            else {odd++;count+=even+1;}
        }return count;
        
    }
};