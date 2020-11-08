class Solution {
public:
    //从大到小去枚举,用大的边,剩余的边就少了,深度就小
    //若当前放某根火柴失败,1.跳过长度相同的火柴,2.若是第一根火柴,则直接剪掉,3.最后一根,也失败
    vector<int> nums;
    vector<int> vis;
    bool dfs(int start,int curlen,int len,int cnt)
    {
        if(cnt==3)return true;
        if(curlen==len)return dfs(0,0,len,cnt+1);
        for(int i=start;i<nums.size();i++)
        {
            if(vis[i])continue;
            if(nums[i]+curlen<=len)
            {
                vis[i]=true;
                if(dfs(i+1,curlen+nums[i],len,cnt))return true;
                vis[i]=false;
            }
            //剪枝 回溯
            if(!curlen||curlen+nums[i]==len)return false;
            while(i+1<nums.size()&&nums[i+1]==nums[i])
            i++;
        }
        return false;
    }
    bool makesquare(vector<int>& _nums) {
        nums=_nums;
        if(nums.size()==0)return false;
        vis.resize(nums.size(),false);
        int sum=0;
        for(auto x:nums)sum+=x;
        if(sum%4)return false;
        sum/=4;
        sort(nums.begin(),nums.end(),greater<int>());
        return dfs(0,0,sum,0);//第0根火柴,拼出了0边长,要拼sum,当前拼第0条边
    }
};