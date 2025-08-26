class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        int posInd = 0;
        int negInd = 1;
        int n = nums.size();
        vector<int> ans(n,0);
        for(int i=0; i<nums.size(); i++) {
            if (nums[i] < 0) {
                ans[negInd] = nums[i];
                negInd += 2;
            }
            else {
                ans[posInd] = nums[i];
                posInd += 2;
            }
        }
        return ans;
    }
};