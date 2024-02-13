class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        vector<bool> vec;
        int m=INT_MIN;
        for( int i=0;i<candies.size();i++)
        {
            if(candies[i]>m)
                m=candies[i];
        }
        for( int i=0;i<candies.size();i++)
        {
            if(candies[i]+ extraCandies>=m)
                vec.push_back(true);
            else vec.push_back(false);
        }
        return vec;
    }
};