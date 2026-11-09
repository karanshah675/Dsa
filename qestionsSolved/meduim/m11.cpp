class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        vector<int> ans(n, 1);
        for (int i = 1; i < n; i++) {
            ans[i] = ans[i - 1] * nums[i - 1];
        }
        int suffix = 1;
        for (int i = n - 2; i >= 0; i--) {
            suffix *= nums[i + 1];
            ans[i] *= suffix;
        }
        return ans;
    }
};
// ## Product of Array Except Self –  LeetCode 238

// ### 1. Brute Force Approach

// - Use two nested loops to traverse the array.
// - For every index, skip the current element and multiply all the remaining elements.
// - Store the product in the answer array.

// Time Complexity: O(n²)\
// Space Complexity: O(1) auxiliary space.

// ### 2. Better Approach – Prefix & Suffix Arrays

// \- Create two arrays:

// 1. Prefix: Stores the product of all elements before the current index.
// 2. Suffix: Stores the product of all elements after the current index.

// Example:

// ```
// nums   = [1, 2, 3, 4]
// prefix = [1, 1, 2, 6]
// suffix = [24, 12, 4, 1]
// ```

// \- Multiply corresponding prefix and suffix values and store them in the answer array.

// Time Complexity: O(n)\
// Space Complexity: O(n)

// ### 3. Optimal Approach – O(1) Auxiliary Space

// - Create an `ans` array initialized with 1.
// - First Loop (Left to Right):
//   - Calculate prefix products and store them directly in `ans`.
//   - `ans[i] = ans[i-1] * nums[i-1]`
// - Second Loop (Right to Left):
//   - Initialize a `suffix` variable with 1.
//   - Calculate suffix products using `nums[i+1]`.
//   - Multiply the suffix product with the existing prefix product in `ans[i]`.
//   - Update the suffix variable in every iteration.

// Time Complexity: O(n)\
// Auxiliary Space Complexity: O(1) (only one extra variable, `suffix`).

// Key Idea: Use the answer array to store prefix products and a single variable to calculate suffix products, avoiding two separate arrays.