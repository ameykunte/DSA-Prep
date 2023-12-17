//https://leetcode.com/problems/trapping-rain-water/

// two pointers, move the pointer with the smaller height to the other end,
// add the difference between the height and the pointer to the result

class Solution {
public:
    int trap(vector<int>& height) {

        int left = 0;
        int right = height.size() - 1;
        int max_l = height[left];
        int max_r = height[right];
        int result = 0;
        while(left!=right){
            if(max_l<=max_r){
                left++;
                max_l = max(max_l,height[left]);
                result+=max_l - height[left];

            }else{
                right--;
                max_r = max(max_r,height[right]);
                result+=max_r - height[right];
            }

        }
        return result;


        
    }
};