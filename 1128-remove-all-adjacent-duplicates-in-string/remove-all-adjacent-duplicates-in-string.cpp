class Solution {
public:
    string removeDuplicates(string s) {
        string ans = "";
        int i=0;
        while(i < s.length()) {
            if(ans.empty() || s[i] != ans.back()) {
                ans.push_back(s[i]);
            }
            else {
                ans.pop_back();
            }
            i++;
        }
        return ans;
    }
};