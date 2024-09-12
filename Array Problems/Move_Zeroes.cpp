class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int zero_count = 0;
        vector<int> ans;

        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] != 0) {
                ans.push_back(nums[i]);
            } 
            else {
                zero_count++;
            }
        }

        for (int i = 0; i < zero_count; i++) {
            ans.push_back(0);
        }

        for (int i = 0; i < nums.size(); i++) {
            nums[i] = ans[i];
        }
    }
};