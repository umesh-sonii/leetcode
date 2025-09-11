class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char, int> mpp;

        for(int i=0; i<s.length(); i++) {
            mpp[s[i]]++;
        }
        for(int j=0; j<t.length(); j++) {
            mpp[t[j]]--;
        }
        for(auto it: mpp){
            if(it.second != 0) return false;
        }

        return true;
    }
};