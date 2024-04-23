class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int m1=0,m2=INT_MAX;
        for(int i=0;i<prices.size();i++)
        {
            m2=min(m2,prices[i]);
            m1=max(m1,prices[i]-m2);
        }
        return m1;
    }
};