class Solution {
public:
    vector<vector<int>> result;
    vector<int>vec;
    int n;
    void dfs(vector<int>&candidates,int target,int sum,int startindex)
    {
        if(sum>target)return;
        if(sum==target){
            result.push_back(vec);
            return ;
        }
        for(int i=startindex;i<n;i++)
        {   
            if(sum+candidates[i]<=target){//加上判断是否越界
            vec.push_back(candidates[i]);
            dfs(candidates,target,sum+candidates[i],i);
            vec.pop_back();
            }
        }
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target)     {
         n=candidates.size();
         dfs(candidates,target,0,0);
         return result;
    }
};