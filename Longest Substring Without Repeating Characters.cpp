class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int ans=0;
        int temp=0;
        for(int i=0; i<s.length(); i++){
            vector<char> b={s[i]};
            temp=0;
            for(int j=i+1; j<s.length(); j++){
                if(find(b.begin(), b.end(), s[j]) == b.end()){
                    b.push_back(s[j]);
                    temp++;
                }else{
                    break;
                }

            }
            ans=max(ans,temp);
            
        }
        if(s!=""){
        return ans+1;
        }else{
            return 0;
        }
        
    }
};
