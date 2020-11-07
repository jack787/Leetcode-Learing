class Solution {
public:
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int newcolor) {
        if(image.empty()||image[0].empty())return image;
        int dx[4]={-1,0,1,0},dy[4]={0,1,0,-1};
        int oldcolor=image[sr][sc];
        if(newcolor==oldcolor)return image;
        image[sr][sc]=newcolor;
        for(int i=0;i<4;i++)
        {
            int x=sr+dx[i],y=sc+dy[i];
            if(x>=0&&x<image.size()&&y>=0&&y<image[0].size()&&oldcolor==image[x][y])
            floodFill(image,x,y,newcolor);
        }
        return image;
    }
};