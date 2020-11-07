class Solution {
public:
    
    int searchInsert(vector<int>& nums, int target) {
        //找到最后一个比target小的数
        int l=0,r=nums.size()-1;
        if(nums.size()==0)return 0;
        while(l<r)
        {
            int mid=(l+r)>>1;
            if(nums[mid]>=target)r=mid;
            else l=mid+1; 
        }
        //cout<<nums[l]<<endl;
        if(nums[l]<target)return l+1;
        return l;
    }
};