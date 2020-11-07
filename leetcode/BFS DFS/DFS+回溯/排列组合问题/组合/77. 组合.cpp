class Solution {
public:
    vector<vector<int>> result;
    vector<int>path;
    void dfs(int n,int k,int start)
    {
        if(path.size()==k)
        {
            result.push_back(path);
            return ;
        }
        for(int i=start;i<=n;i++)
        {
            path.push_back(i);//处理节点
            dfs(n,k,i+1);
            path.pop_back();
        }
    }
    vector<vector<int>> combine(int n, int k) {
        result.clear();
        path.clear();
        dfs(n,k,1);
        return result;
    }
};