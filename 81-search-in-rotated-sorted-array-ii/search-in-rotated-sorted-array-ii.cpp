class Solution {
public:
    bool search(vector<int>& nums, int target) {
        int low = 0;
        int high = nums.size()-1;

        while(low <= high) {
            int mid = low + (high-low)/2;
            if(nums[mid] == target){
                return true;
                break;
            } 

            if(nums[low] == nums[mid] && nums[mid] == nums[high]){
                low++;
                high--;
                continue;
            }

            //right sorted
            if(nums[mid] <= nums[high]) {
                if(nums[mid] < target && nums[high] >= target) {
                    low = mid+1;
                }
                else high = mid-1;
            }
            
            //left sorted
            else {
                if(nums[low] <= target && nums[mid] > target) {
                    high = mid-1;
                }
                else low = mid+1;
            }
        }
        return false;
    }
};