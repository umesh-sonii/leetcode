class Solution {
public:
    int findMin(vector<int>& nums) {
        int n = nums.size();
        int low = 0;
        int high = n-1;

        while(low <= high) {
            int mid = low + (high-low)/2;

            int next = (mid+1)%n;
            int prev = (mid-1)%n;

            if (nums[low] <= nums[high]) {
                return nums[low];
            }

            if(nums[mid] < nums[next] && nums[mid] < nums[prev]) {
                return nums[mid];
            }
            else if(nums[mid] >= nums[low]) {
                low = mid+1;
            }
            else {
                high = mid-1;
            }
        }
        return -1;
    }
};