class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> sol;
        for(int j = 0; j < nums.size(); j++) {
            for (int i = 0; i < nums.size(); i++) {
                if (nums.at(j) + nums.at(i) == target) {
                    sol.push_back(j);
                    sol.push_back(i);
                    return sol;
                }
            }
        }

        return sol;
    };
};