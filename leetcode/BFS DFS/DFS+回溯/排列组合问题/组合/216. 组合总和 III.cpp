class Solution {
public:
    vector<vector<int>> result;
    vector<int> path;
    void dfs(int target,int k,int startindex)
    {
        if(k==path.size())
        {
            if(target==0)result.push_back(path);
            return;
        }
        for(int i=startindex;i<=9&&target>=i;i++)
        {
            path.push_back(i);
            dfs(target-i,k,i+1);
            path.pop_back();
        }
    }
    vector<vector<int>> combinationSum3(int k, int n) {
        dfs(n,k,1);
        return result;
    }
};