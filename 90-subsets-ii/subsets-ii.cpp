class Solution {
public:

    void fn(int index, vector<int>& ds, vector<vector<int>>& ans, vector<int>& nums){
        ans.push_back(ds);

        for(int i = index; i < nums.size(); i++) {
            if(i > index && nums[i] == nums[i-1]) continue;

            ds.push_back(nums[i]);
            fn(i+1, ds, ans, nums);

            ds.pop_back();
        }
    }

    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        vector<int> ds;
        vector<vector<int>> ans;
        sort(nums.begin(), nums.end());
        fn(0, ds, ans, nums);
        return ans;
    }
};