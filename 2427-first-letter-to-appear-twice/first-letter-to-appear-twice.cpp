class Solution {
public:
    char repeatedCharacter(string s) {
        vector<int> freq(26,0);
        queue<char> q;

        for(int i=0; i<s.length(); i++) {
            freq[s[i] - 'a']++;

            q.push(s[i]);

            while(!q.empty() && freq[q.front() - 'a'] < 2) q.pop();
        }

        return q.front();
    }
};