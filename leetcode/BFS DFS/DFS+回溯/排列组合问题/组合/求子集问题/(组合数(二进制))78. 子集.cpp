class Solution {
public:
    vector<vector<int>>ans;
    vector<vector<int>> subsets(vector<int>& nums) {
        //位运算
        int n=nums.size();
        for(int i=0;i<(1<<n);i++)
        {
            vector<int>path;
            for(int j=0;j<n;j++)
            if(i>>j&1)
            path.push_back(nums[j]);
            ans.push_back(path);
        }
        return ans;
    }
};