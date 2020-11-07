class Solution {
public:
    vector<vector<int>> result;
    void dfs(vector<int>&nums,vector<int>&vec,vector<bool>&used)
    {
        if(vec.size()==nums.size()){
            result.push_back(vec);
            return ;
        }
        for(int i=0;i<nums.size();i++)
        {
            if(i>0&&nums[i]==nums[i-1]&&used[i-1]==false)
            continue;//先判断同树层
            if(used[i]==false)//判断同树枝
            {
                used[i]=true,vec.push_back(nums[i]);
                dfs(nums,vec,used);
                used[i]=false,vec.pop_back();
            }
        }
    }
    vector<vector<int>> permuteUnique(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        vector<bool> used(nums.size(),false);
        vector<int> vec;
        dfs(nums,vec,used);
        return result;
    }
};