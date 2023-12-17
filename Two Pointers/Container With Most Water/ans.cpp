//https://leetcode.com/problems/container-with-most-water/

// two pointers from both ends, move the pointer with the smaller height

class Solution {
public:
    int maxArea(vector<int>& height) {
        int maximum = 0;
        int left = 0;
        int amount = 0;
        int right = height.size()-1;
        while(left < right){
            amount = (right - left) * (min(height[left], height[right]));
            maximum = max(amount,maximum);
            if(height[left]<=height[right]){
                left++;
            }else{
                right--;
            }
        }
        return maximum;
        
    }
};









