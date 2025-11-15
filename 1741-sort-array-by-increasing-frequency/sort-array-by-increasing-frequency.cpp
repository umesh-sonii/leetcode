class Solution {
public:

    vector<int> frequencySort(vector<int>& nums) {
        unordered_map<int, int> mpp;
        vector<int> res;

        for(int x : nums) {
            mpp[x]++;
        }

        vector<pair<int,int>> vec;
        for(auto it = mpp.begin(); it != mpp.end(); it++) {
            vec.push_back({it->first, it->second});
        }

        sort(vec.begin(), vec.end(), [&](auto &a, auto &b) {
            if (a.second == b.second)
                return a.first > b.first;  
            return a.second < b.second;    
        });

        for(int i=0; i<vec.size(); i++) {
            while(vec[i].second > 0) {
                res.push_back(vec[i].first);
                vec[i].second--;
            }
        }

        return res;
    }
};