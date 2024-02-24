#include <vector>

class Solution {
public:
    int pivotIndex(std::vector<int>& nums) {
        int rightSum = 0, leftSum = 0;
        for(int i = 0; i < nums.size(); i++){
            rightSum += nums[i];
        }
        for(int i = 0; i < nums.size(); i++){
            rightSum -= nums[i];
            if(leftSum == rightSum){
                return i;
            }
            leftSum += nums[i];
        }
        return -1;
    }
};