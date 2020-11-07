class Solution {
public:
    const string mp[10]={"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
    vector<string> result;
    string path;
    int n;
    void dfs(string digits,int startindex)
    {
        if(path.size()==n)
        {
            if(path.size()>=1)result.push_back(path);
            return;
        }
        char t=digits[startindex]-'0';
        for(int i=0;i<mp[t].size();i++)
        {
            path.push_back(mp[t][i]);
            dfs(digits,startindex+1);
            path.pop_back();
        }
    }
    vector<string> letterCombinations(string digits) {
        n=digits.size();
        dfs(digits,0);
        return result;
    }
};