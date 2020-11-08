class Solution {
public:
    vector<string>result;
    string path;
    void dfs(int n,int l,int r)
    {
        if(l==n&&r==n)
        {
            result.push_back(path);
            return;
        }
        if(l<n)
        {   path+='(';
            dfs(n,l+1,r);
            path.pop_back();
        }
        if(r<l)
        {
            path+=')';
            dfs(n,l,r+1);
            path.pop_back();
        }
    }
    vector<string> generateParenthesis(int n) {
        dfs(n,0,0);
        return result;
    }
};