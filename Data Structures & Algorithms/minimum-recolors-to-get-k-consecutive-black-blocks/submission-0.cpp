class Solution {
public:
    int minimumRecolors(string blocks, int k) {
        int black=0;
        int white=0;
        int mini=INT_MAX;
        int j=0;
        for(char c:blocks)
        {
            k--;
            if(c=='B')black++;else white++;
            if(k<=0){mini=min(mini,white);
            if(blocks[j]=='W')white--;
            else black--;
            j++;
            
            }
        }
        return mini;
    }
};