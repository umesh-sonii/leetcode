class Solution {
public:

        bool Valid(char ch){
            if((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z') || (ch >= '0' && ch <= '9')) return 1;
            return 0;
        }

        char toLowerCase(char ch){
            if((ch >= 'a' && ch <= 'z') || (ch >= '0' && ch <= '9')) return ch;
            else {
                char temp = ch - 'A' + 'a';
                return temp;
            }
        }

        bool Palindrome(string a){
            int s=0;
            int e=a.length()-1;
            while (s <= e) {
            if (a[s] != a[e])
                return false;
            s++;
            e--;
            }
        return true;
        }
    bool isPalindrome(string s) {
        //remove extra char
        string temp = {};
        for(int i=0; i<s.length(); i++){
            if(Valid(s[i])){
                temp.push_back(s[i]);
            }
        }

        // To lower case
        for(int i=0; i<temp.size(); i++){
            temp[i] = toLowerCase(temp[i]);
        }

        return Palindrome(temp);
    }
};