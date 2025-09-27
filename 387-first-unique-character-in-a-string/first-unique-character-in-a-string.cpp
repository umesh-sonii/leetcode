class Solution {
public:
    int firstUniqChar(string s) {
        vector<int> freq(26,0);
        queue<int> que;

        for(int i=0; i<s.length(); i++) {
            char ch = s[i];
            freq[ch - 'a']++;
            que.push(i);

            while(!que.empty() > 0 && freq[s[que.front()] - 'a'] > 1) que.pop();
        }

        return que.empty() ? -1 : que.front();
    }
};