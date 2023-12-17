//https://leetcode.com/problems/3sum/

// two sum with a twist, use two pointers to find the third number
// sort the array first, then iterate through the array, for each number, use two pointers to find the other two numbers
// if the sum is greater than 0, reduce the right pointer, if the sum is less than 0, increase the left pointer
// if the sum is 0, add the three numbers to the result, then move the pointers to the next different numbers


class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> result;
        
        int n = nums.size();
        if (n < 3) {
            return result;
        }
        
        sort(nums.begin(), nums.end());
        
        for (int i = 0; i < n - 2; i++) {
            if (nums[i] > 0) {
                break;
            }
            if (i > 0 && nums[i - 1] == nums[i]) {
                continue;
            }
            
            int j = i + 1;
            int k = n - 1;
            
            while (j < k) {
                int sum = nums[i] + nums[j] + nums[k];
                
                if (sum < 0) {
                    j++;
                } else if (sum > 0) {
                    k--;
                } else {
                    result.push_back({nums[i], nums[j], nums[k]});
                    
                    while (j < k){
                        if(nums[j] == nums[j + 1]){
                         j++;
                        }else if(nums[k - 1] == nums[k]){
                            k--;
                        }else{
                            break;
                        }

                    }
                    j++;
                    k--;
                }
            }
        }
        
        return result;
    }
};
