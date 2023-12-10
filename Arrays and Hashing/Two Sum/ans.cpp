//https://leetcode.com/problems/two-sum/

//init a umap, iter over nums and add the diff to it.
//if diff == nums[i],return the indices

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> map;
        vector<int> ans;
        int diff;
        for (int i = 0;i<nums.size();i++){
            diff =  target - nums[i];
            if(map.find(diff) != map.end()){
                ans.push_back(map[diff]);
                ans.push_back(i);
                break;
            }else{
                map.insert({nums[i], i});
            }
        }
        return ans;
    }
};