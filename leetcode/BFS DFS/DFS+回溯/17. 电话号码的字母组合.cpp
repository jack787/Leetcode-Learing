class Solution {
public:
    vector<string>ans;
char ops[10][10] = {"", "", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};
    vector<string> letterCombinations(string digits) {
        if(digits=="")return ans;
        dfs(digits,0,"");
        return ans;
    }
    void dfs(string &digits,int u,string path)
    {
        if(u==digits.size())
        {
            if(path.size())ans.push_back(path);
            return ;
        }
        int v=digits[u]-'0';
        for(int i=0;ops[v][i];i++)
        {
            dfs(digits,u+1,path+ops[v][i]);
        }
    }
};