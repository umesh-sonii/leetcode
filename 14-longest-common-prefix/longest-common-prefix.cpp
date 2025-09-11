class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string ans = "";

        sort(strs.begin(), strs.end());

        string first = strs.front();
        string last = strs.back();

        int i = 0;

        while(first[i] == last[i] && i < first.length() && i < last.length()) {
            i++;
        }
        return first.substr(0,i);
    }
};