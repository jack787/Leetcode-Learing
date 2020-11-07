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
        for(int i=start;i-1+(k-path.size())<=n;i++)//剪枝,把至少还要path.size()个节点算进去
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