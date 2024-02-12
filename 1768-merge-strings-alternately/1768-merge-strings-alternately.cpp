class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        string final="";
        int i=0,j=0,m,n;
        m=word1.size();
        n=word2.size();
        int mini=min(m,n);
        while(i<mini && j<mini)
        {
            final+=(word1[i]);
            i++;
            final+=(word2[j]);
            j++;
        }
        while(i<m) 
        {
            final+=(word1[i]);
            i++;
        }
        while(j<n)
        {
            final+=(word2[j]);
            j++;
        }
        return final;
    }
};