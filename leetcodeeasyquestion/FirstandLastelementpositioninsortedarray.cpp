class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
         vector<int>v;
    
    if(nums.size() == 1 && target == nums[0])
    {
        v.push_back(0);
        v.push_back(0);
        return v;
    }
    
    int i = 0,j = nums.size()-1;
    
    while(i < nums.size())
    {
        if(nums[i] == target)
        {
            v.push_back(i);
            break;
        }
        ++i;
    }
    while(j >= 0)
    {
        if(nums[j] == target)
        {
            v.push_back(j);
            break;
        }
        --j;
    }
    if(v.empty())
    {
        v.push_back(-1);
        v.push_back(-1);
    }
    return v;
}
};
