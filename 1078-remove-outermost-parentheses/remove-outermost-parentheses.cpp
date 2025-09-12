class Solution {
public:
    string removeOuterParentheses(string s) {
        int cnt = 0;
        string result = "";
        
        for(int i = 0; i < s.length(); i++) {
            char ch = s[i];

            if(ch == '(') {
                cnt++;
                if(cnt > 1) result += '(';
            }
            else {
                cnt--;
                if(cnt > 0) result += ')';
            }
        }
        return result;
    }
};