class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int start=0,end = nums.size()-1;
        int mid,idx=nums.size();
        while(start<=end){
            mid=(end+start)/2;
            if(nums[mid]==target){
                idx=mid;
                break;
            }
            else if(nums[mid]>target){
                
                end=mid-1;
                idx=mid;
            }
            else{
                start=mid+1;
            }
        }
        return idx;   
    }
};