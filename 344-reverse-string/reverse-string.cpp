class Solution {
public:
    void reverseString(vector<char>& s) {
        int b=0;
        int e = s.size()-1;
        while(b<e){
            swap(s[b++],s[e--]);
        }
    }
};