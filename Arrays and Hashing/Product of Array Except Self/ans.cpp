//https://leetcode.com/problems/product-of-array-except-self/

//init ans vector with all elems = 1, then mult all elems from left to right and 
//store in ans and then repeat from right to left and mult with ans.
// the first op will give prefix product and second will give postfix product
class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        vector<int> ans(n,1);
        int prefix = 1;
        int postfix = 1;

        for(int i =0;i<n;i++){
            ans[i] = prefix;
            prefix *= nums[i];
        }

        for(int i = n-1;i>=0;i--){
            ans[i]*=postfix;
            postfix*=nums[i];
        }
        return ans;
    }
};