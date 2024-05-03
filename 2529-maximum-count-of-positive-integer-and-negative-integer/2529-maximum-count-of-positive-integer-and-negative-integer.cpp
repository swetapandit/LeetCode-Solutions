class Solution {
public:
    int maximumCount(vector<int>& nums) {
        int pos=0,neg=0;
        for(int n:nums)
        {
            if(n<0) neg++;
            else if(n>0) pos++;
        }
        if(pos>neg) return pos;
        return neg;
    }
};