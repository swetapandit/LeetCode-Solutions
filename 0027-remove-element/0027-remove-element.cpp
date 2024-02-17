class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        vector<int>v;
        int c=0;
        for(int i=0;i<nums.size();i++)
        {
            if(val!=nums[i]){
                v.push_back(nums[i]);
                c++;
            }
        }
        for(int i=0;i<v.size();i++) nums[i]=v[i];
        return c;
    }
};