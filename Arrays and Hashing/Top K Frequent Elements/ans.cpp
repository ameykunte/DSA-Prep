//https://leetcode.com/problems/top-k-frequent-elements

//take a map and store the frequency of each element, then take a bucket of size n+1 and store the elements in the bucket according to their frequency,
// then traverse the bucket from the end and insert the elements in the result vector until the size of the result vector is equal to k.

class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int> map;
        int n = nums.size();
        for(int i= 0;i<n;i++){
            map[nums[i]]++;
        }

        vector<vector<int>> buckets(n+1);
        for(auto it = map.begin(); it!=map.end();it++){
            buckets[it->second].push_back(it->first);
        }

        vector<int>result;

        int i = n;
        while(result.size()!=k){
            if(!buckets[i].empty()){
                result.insert(result.end(),buckets[i].begin(),buckets[i].end());
            }
            i--;

        }
        return result;



    }
};