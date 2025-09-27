class Solution {
public:
    int firstUniqChar(string s) {
        unordered_map<char,int> mpp;
        queue<int> que;

        for(int i=0; i<s.length(); i++) {
            if(mpp.find(s[i]) == mpp.end()) que.push(i);
            mpp[s[i]]++;

            while(que.size() > 0 && mpp[s[que.front()]] > 1) que.pop();
        }

        return que.empty() ? -1 : que.front();
    }
};