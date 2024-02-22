class Solution {
public:

    string longestPalindrome(string s) {
        string ans=s.substr(0, 1);
        int n=s.size();
        for(int i=1; i<n; i++){
            string temp=s.substr(i, 1);
            for(int j=1; i-j>=0&&i+j<=n-1;j++){
                if(s[i-j]==s[i+j]){
                    temp=s.substr(i-j, 1)+temp+s.substr(i+j, 1);
                }else{
                    break;
                }
            }
            if(temp.size()>ans.size()){
                ans=temp;
            }
         if(s[i]==s[i-1]){
            string temp=s.substr(i-1, 2);
            for(int j=1; i-j>0&&i+j<n; j++){
                if(s[i-j-1]==s[i+j]){
                   temp=s.substr(i-j-1, 1)+temp+s.substr(i+j, 1);
                }else{
                    break;
                }
            }
       
              if(temp.size()>ans.size()){
                ans=temp;
            } 
            }         
        }
        return ans;
        }
        
    
};
