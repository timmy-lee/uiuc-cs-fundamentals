#include <vector>
#include <iostream>
using std::vector;

class Solution {
  public:
    vector<int> runningSum(vector<int>& nums) {
      int currentSum = 0;
      // vector<int> result;
      for (int i = 0; i < nums.size(); i++) {
        currentSum += nums[i];
        nums[i] = currentSum;
      }
      return nums;
    }
};

int main() {
  vector<int> arr {1,2,3,4,5};
  Solution solution;
  vector<int> result = solution.runningSum(arr);

  for (int i = 0; i < result.size(); i++) {
    std::cout << result[i] << std::endl;
  }

  // std::cout << result << std::endl;

  return 0;
}
