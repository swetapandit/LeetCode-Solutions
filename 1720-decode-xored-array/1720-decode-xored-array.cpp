class Solution {
public:
    vector<int> decode(vector<int>& encoded, int first) {
        vector<int> res;
        res.push_back(first);
        for(int i=0;i<encoded.size();i++)
        {
            int n=encoded[i]^res.back();
            res.push_back(n);
        }
        return res;
    }
};