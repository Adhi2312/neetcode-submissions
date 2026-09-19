class Solution {
public:
    vector<string>ans;
    bool isValid(string s)
    {
        int open=0;
        int close=0;
        for(char c:s)
        {
            if(c=='(')
            {
                open++;
            }
            else
            {
                if(open<1)return false;
                open--;
            }
        }
        return open==0 && close ==0;
    }
    void generate(int n,string s,int open,int close)
    {
        if(open < 0 || close < 0) return;
        if(s.size()==2*n)
        {
            if(isValid(s))
            {
                ans.push_back(s);
            }
            return;
        }
        
            generate(n,s+'(',open-1,close);
        
        generate(n,s+')',open,close-1);

    }
    vector<string> generateParenthesis(int n) {
        generate(n,"",n,n);
        return ans;
        
        
    }
};
