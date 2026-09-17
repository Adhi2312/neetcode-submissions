class Solution {
public:
    int sum(int n)
    {
        int s=0;
        while(n!=0)
        {
            s+=(n%10)*(n%10);
            n/=10;
        }
        return s;
    }
    bool isHappy(int n) {
        int x=sum(sum(n));
        int y=sum(n);
        while(x!=1)
        {
            if(x==y)return false;
            x=sum(sum(x));
             y=sum(y);
        }
        return  true;
        
    }
};
