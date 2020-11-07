class Solution {
public:
    vector<vector<int>>result;
    vector<int> path;
    int n;
    void dfs(vector<int>&num,int startindex)
    {
        result.push_back(path);
        if(startindex>=n)return;
        for(int i=startindex;i<n;i++)
        {
            path.push_back(num[i]);
            dfs(num,i+1);
            path.pop_back();
        }
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        n=nums.size();
        dfs(nums,0);
        return result;
    }
};