class Solution {
public:
    vector<vector<int>> ans;
    vector<int> path;
    vector<bool> st;
    vector<vector<int>> permute(vector<int>& nums) {
        st=vector<bool>(nums.size(),false);
        dfs(nums,0);
        return ans;
    }
    void dfs(vector<int> &nums,int u)
    {
        if(u==nums.size())
        {
            ans.push_back(path);
            return ;
        }
        for(int i=0;i<nums.size();i++)
            if(!st[i])
            {
                st[i]=true,path.push_back(nums[i]);
                dfs(nums,u+1);
               st[i]=false,path.pop_back();//不加就只有一个答案,因为没回溯就没分支
            }
    }
};