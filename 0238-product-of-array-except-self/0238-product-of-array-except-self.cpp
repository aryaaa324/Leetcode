class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();                   // Step 1: Get size of input array
        vector<int> answer(n, 1);              // Step 2: Create answer array, initialize with 1
        
        // Step 3: Calculate prefix product for each index
        int prefix = 1;                        // prefix starts as 1 (nothing before first element)
        for (int i = 0; i < n; i++) {
            answer[i] = prefix;                // store product of all numbers before i
            prefix *= nums[i];                 // update prefix by multiplying current number
        }

        // Step 4: Calculate suffix product for each index
        int suffix = 1;                        // suffix starts as 1 (nothing after last element)
        for (int i = n - 1; i >= 0; i--) {
            answer[i] *= suffix;               // multiply with product of all numbers after i
            suffix *= nums[i];                 // update suffix by multiplying current number
        }

        // Step 5: Return result
        return answer;
    }
};