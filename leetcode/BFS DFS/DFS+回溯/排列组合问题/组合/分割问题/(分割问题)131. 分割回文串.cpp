class Solution {
public:
    vector<vector<string>> result;
    vector<string>path;
    bool ispalindrome(const string&s,int start,int end)
    {
        for(int i=start,j=end;i<j;i++,j--)
        {
            if(s[i]!=s[j])return false;
        }
        return true;
    }
    void dfs(const string&s,int startindex)
    {
        if(startindex>=s.size())
        {
            result.push_back(path);
            return ;
        }
        for(int i=startindex;i<s.size();i++)
        {
            //选取[startindex,i]的子串
            if(ispalindrome(s,startindex,i))
            {
                path.push_back(s.substr(startindex,i-startindex+1));
                dfs(s,i+1);
                path.pop_back();
            }
        }
    }
    vector<vector<string>> partition(string s) {
        dfs(s,0);
        return result;
    }
};