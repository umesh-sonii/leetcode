class Solution {
public:

    void fn(vector<string> &result, string ans, int open, int close, int &n) {
        if(ans.length() == 2*n){
            result.push_back(ans);
            return;
        }

        if(open == close) {
            if(open < n){
                fn(result, ans+'(',open+1,close,n);
            }
        }
        else{ // open > close
            if(open < n) {
                fn(result, ans+'(',open+1,close,n);
            }
            if(close < n) {
                fn(result, ans+')',open,close+1,n);
            }
        }
    }

    vector<string> generateParenthesis(int n) {
        vector<string> result;
        fn(result, "", 0, 0, n);
        return result;
    }
};