class Solution {
public:
    vector<vector<int>>result;
    vector<int> path;
    int n;
    void dfs(vector<int> &cd,int target,int sum,vector<bool>&used,int startindex)
    {
        if(sum==target)
        {
            result.push_back(path);
            return;
        }
        for(int i=startindex;i<n&&sum+cd[i]<=target;i++)
        {
            if(i>=1&&cd[i]==cd[i-1]&&used[i-1]==false)
            continue;
            sum+=cd[i];
            used[i]=true;
            path.push_back(cd[i]);
            dfs(cd,target,sum,used,i+1);//防止一个元素用多次
            used[i]=false;
            sum-=cd[i];
            path.pop_back();
        }
    }
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target)    {
        vector<bool>used(candidates.size(),false);
        result.clear();
        path.clear();
        n=candidates.size();
        sort(candidates.begin(),candidates.end());
        dfs(candidates,target,0,used,0);
        return result;
    }
};