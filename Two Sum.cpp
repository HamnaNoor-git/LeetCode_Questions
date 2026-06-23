class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int sum2[2];
        int n = nums.size();

        for(int i = 0; i < n; i++) {
            for(int j = 0; j < n; j++) {

                if(i == j) {
                    continue;
                }

                if(nums[i] + nums[j] == target) {
                    sum2[0] = i;
                    sum2[1] = j;

                    return vector<int>(sum2, sum2 + 2);
                }
            }
        }

        return {};
    }
};
