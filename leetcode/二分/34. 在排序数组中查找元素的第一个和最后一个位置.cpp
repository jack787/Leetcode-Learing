class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int l=0,r=nums.size()-1;
        if(r==-1)return vector<int>({-1,-1});
        while(l<r)
        {
            int mid=(l+r)>>1;
            if(nums[mid]>=target)r=mid;
            else l=mid+1;
        }
        if(nums[l]!=target)return vector<int>({-1,-1});
        else{
            vector<int>res(2,0);
            res[0]=l;
            l=0,r=nums.size()-1;
            while(l<r)
            {
                int mid=(l+r+1)>>1;
                if(nums[mid]<=target)l=mid;
                else r=mid-1;
            }
            res[1]=l;
            return res;
        }
    }
};