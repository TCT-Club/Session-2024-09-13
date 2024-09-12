class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int i=0, j=nums.size()-1;
        while(i<=j){
            if(nums[i] == val){
                swap(nums[i], nums[j]);
                j--;
            }
            else {
                i++;
            }
        }
        return i;
    }
};