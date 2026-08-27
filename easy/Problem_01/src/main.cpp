#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> sol;
        for(int j = 0; j < nums.size(); j++) {
            for (int i = 0; i < nums.size(); i++) {
                if (nums.at(j) + nums.at(i) == target && i != j) {
                    sol.push_back(j);
                    sol.push_back(i);
                    return sol;
                }
            }
        }

        return sol;
    };
};

int main() {
    //Test cases


}