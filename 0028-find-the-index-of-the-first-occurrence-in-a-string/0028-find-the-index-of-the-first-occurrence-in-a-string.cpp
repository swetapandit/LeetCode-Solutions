class Solution {
public:
    int strStr(string haystack, string needle) {
        //return haystack.find(needle)==string::npos?-1:haystack.find(needle);
        int n=needle.size(),h=haystack.size();
        for(int i=0;i<=h-n;i++)
        {
            if(needle==haystack.substr(i,n)) return i;
        }
        return -1;
    }
};