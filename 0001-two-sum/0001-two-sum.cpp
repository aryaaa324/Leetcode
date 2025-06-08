class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> hashmap;  // num -> index

        for (int i = 0; i < nums.size(); ++i) {
            int complement = target - nums[i];

            // Check if complement is already in the map
            if (hashmap.find(complement) != hashmap.end()) {
                return {hashmap[complement], i};
            }

            // Store the current number and its index
            hashmap[nums[i]] = i;
        }

        return {}; 
        
    }
};