class Solution {
public:

    void fn(vector<int>& nums, int index, vector<int>& subset, vector<vector<int>>& ans) {
        if(index >= nums.size()) {
            ans.push_back(subset);
            return ;
        }

        subset.push_back(nums[index]);
        fn(nums, index+1, subset, ans);

        subset.pop_back();
        fn(nums, index+1, subset, ans);
        
    }

    vector<vector<int>> subsets(vector<int>& nums) {
        vector<int> subset;
        vector<vector<int>> ans;

        fn(nums, 0, subset, ans);
        return ans;
    }
};