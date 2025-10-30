class Solution {
public:
    int cnt(vector<int>& nums, int goal) {
        int l=0, r=0, sum=0, count=0;
        
        if(goal < 0) return 0;

        while(r < nums.size()) {
            sum += nums[r];

            while(sum > goal) {
                sum = sum - nums[l];
                l++;
            }
            count += (r-l+1);
            r++;
        }
        return count;
    }

    int numSubarraysWithSum(vector<int>& nums, int goal){
        return cnt(nums, goal) - cnt(nums, goal-1);
    }
};