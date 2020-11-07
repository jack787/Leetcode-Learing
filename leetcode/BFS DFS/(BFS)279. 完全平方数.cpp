class Solution {
public:
    int numSquares(int n) {
        queue<int>q;
        q.push(0);
        vector<int> dist(n+1,INT_MAX);
        dist[0]=0;
        while(q.size())
        {
            int t=q.front();
            q.pop();
            if(t==n)return dist[t];
            for(int i=1;i*i+t<=n;i++)
            {
                int j=t+i*i;
                if(dist[j]>dist[t]+1)
                {
                    dist[j]=dist[t]+1;
                    q.push(j);
                }
            }
        }
        return 0;
    }
};