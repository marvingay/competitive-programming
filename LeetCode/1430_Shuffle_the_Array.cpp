class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        vector<int> ans;
        int x = 0;
        int y = n;
        while (x < n && y < 2 * n) {
            ans.push_back(nums[x++]);
            ans.push_back(nums[y++]);
        }
        return ans;
    }
};