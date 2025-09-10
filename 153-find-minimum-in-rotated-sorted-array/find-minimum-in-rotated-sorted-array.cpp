class Solution {
public:
    int findMin(vector<int>& nums) {
        int n = nums.size();
        int cnt = 0;
        int low = 0;
        int high = n-1;

        for(int i=0; i<n-1; i++) {
            if(nums[i] > nums[i+1]) return nums[i+1];
        }
        return nums[0];
    }
};