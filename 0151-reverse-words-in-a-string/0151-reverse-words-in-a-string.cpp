class Solution {
public:
    string reverseWords(string s) {
        string temp="", ans="";
        for(int i=s.size()-1;i>=0;i--)
        {
            if(s[i]==' ' && temp=="") continue;
            if(s[i]!=' ')
            {
                temp=s[i]+temp;
            }
            else
            {
                ans+=temp;
                ans+=' ';
                temp="";
            }
            
        }
        ans+=temp;
        int tot=ans.size()-1;
        while(ans[tot]==' ')
        {
            ans=ans.substr(0,tot);
            tot--;
        }
        return ans;
    }
};