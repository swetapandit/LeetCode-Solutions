class Solution {
public:
    string reverseWords(string str) {
    string temp = "", ans = "";
	for(int i=str.size()-1;i>=0;i--)
    {
        if(str[i]==32 && temp=="") continue;
        if (str[i] != 32)
        {
            temp = str[i] + temp;
        }
        
        else
        {
           ans += temp;
           ans+=' ';
           temp = "";
        }
    }
    ans += temp;
        int c=ans.size()-1;
        while(ans[c--]==' ')
        {
            ans=ans.substr(0,ans.size()-1);
        }
    return ans;
    
}
};