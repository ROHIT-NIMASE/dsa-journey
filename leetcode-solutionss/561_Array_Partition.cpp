#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Solution {
public:
    int arrayPairSum(vector<int>& nums) {

        sort(nums.begin(), nums.end());

        int ans = 0;

        for(int i = 0; i < nums.size(); i += 2) {
            ans += nums[i];
        }

        return ans;
    }
};

int main() {

    vector<int> nums = {1,4,3,2}; 

    Solution obj;

    cout << obj.arrayPairSum(nums);

    return 0;
}