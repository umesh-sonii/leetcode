class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
        vector<int> freq(101, 0);
        int max = 0, result = 0;

        for(int i=0; i<nums.size(); i++) {
            freq[nums[i]]++;
        }

        max = *max_element(freq.begin(), freq.end());

        for(int i=0; i<freq.size(); i++) {
            if(freq[i] == max) {
                result += freq[i];
            }
        }
        return result;
    }
};