class Solution {
public:
    string reverseWords(string s) {
        s+=' ';
        vector<string> ans;
        string temp;
        int i=0;
        while(s[i]==' ')i++;
        for(;i<s.size();i++){
            // store words in a vector
            if(s[i]!=' '){
                temp+=s[i];
            }
            else{
                if(s[i-1]!=' ') ans.push_back(temp);
                temp="";
            }
        }
        s="";
        for(int i=ans.size()-1;i>=0;i--){
            // store words in rev order in s and space
            s+=ans[i];
            s+=' ';
        }
        s=s.substr(0,s.size()-1);
        // removed last space
        return s;
    }
};