//https://leetcode.com/problems/two-sum-ii-input-array-is-sorted/

// two pointers, while the sum of nums at pointers is not equal to target, move the pointers 
//reduce right while sum is greater than target, left otherwise

class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int left= 0;
        int right = numbers.size()-1;
        while(numbers[left]+numbers[right]!=target){
            if (numbers[right]+ numbers[left] >target){
                right--;  
                continue;
            }
            left++;
        }
        return {left+1,right+1};
        
    }
};