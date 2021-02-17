class Solution {
public:
    int majorityElement(vector<int>& nums) {
         int count = 0, x;
    for(int i=0; i<nums.size(); i++){
        if(count == 0){
            x = nums[i];
        }
        if(x == nums[i])    count++;
        else    count--;
    }
    return x;

    }
};
