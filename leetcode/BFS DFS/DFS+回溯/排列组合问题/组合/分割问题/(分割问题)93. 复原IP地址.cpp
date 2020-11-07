class Solution {
public:
    bool isIP(const string &s,int start,int end)
    {
        if(end>=start+3)return false;
        if(start==end&&s[start]=='0')return true;
        int res=0;
        bool flag=false;
        for(int i=start;i<=end;i++)
        {
            int number=s[i]-'0';
            if(res==0&&number==0)return false;
            res=res*10+number;
        }
        if(res>=0&&res<=255)return true;
        return false;
    }
    vector<string> result;
    vector<string> path;
    int n;
    void dfs(string&s,int startindex)
    {
        if(path.size()==4)
        {
            string res="";
            for(int i=0;i<3;i++)
            {
                res+=path[i]+'.';
            }
            res+=path[3];
            if(res.size()==n+3)
            result.push_back(res);
            return ;
        }
        for(int i=startindex;i<n;i++)
        {
            if(isIP(s,startindex,i))
            {
                path.push_back(s.substr(startindex,i-startindex+1));
                dfs(s,i+1);
                path.pop_back();
            }
        }
    }
    vector<string> restoreIpAddresses(string s) {
        n=s.size();
        dfs(s,0);
        return result;
    }
};