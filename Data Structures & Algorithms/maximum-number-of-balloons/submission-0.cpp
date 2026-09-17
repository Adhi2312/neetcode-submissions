class Solution {
public:
    int maxNumberOfBalloons(string text) {
        unordered_map<char,int>mp;
        for(char c:text)
        {
            mp[c]++;
        }
        int mini=INT_MAX;
        mini=min(mini,mp['b']);
        mini=min(mini,mp['a']);
        mini=min(mini,mp['l']/2);
        mini=min(mini,mp['o']/2);
        mini=min(mini,mp['n']);
        return mini;
        
    }
};