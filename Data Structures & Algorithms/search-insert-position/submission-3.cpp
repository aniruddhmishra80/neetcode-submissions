class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int n = nums.size();
        int len = 0;
        int left = 0; int right = n -1; 
        while(left < right){
            int mid = (left + right)/2;
            if(nums[mid] < target){
                left = mid + 1;
            } else {
                right = mid;
            }
        }
        if(nums[left] < target)
            return left + 1;
        return left; 
    }
};