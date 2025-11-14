class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int maxi = INT_MIN;
        int n = nums.size();
        for(int i=0; i<n; i++) {
            int pr = 1;
            for(int j=i; j<n; j++) {
                pr = pr*nums[j];
                maxi = max(maxi, pr);
            }
        }
        return maxi;
    }
};