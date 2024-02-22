class Solution {
public:
    bool isPalindrome(int x) {
        bool b=true;
        string s = to_string(x);
        for(int i=0; i<(s.length()-s.length()%2)/2; i++){
            if(s[i]!=s[s.length()-i-1]){
                b=false;
                break;
            }
        }

        return b;
    }
};
