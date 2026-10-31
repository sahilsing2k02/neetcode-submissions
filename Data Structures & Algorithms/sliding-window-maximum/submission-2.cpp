class Solution {
public:
    std::vector<int> maxSlidingWindow(std::vector<int>& nums, int k) {
        int n = nums.size();
        vector<int> output;
        output.reserve(n - k + 1);
        deque<int> q; // Stores indices

        for (int r = 0; r < n; ++r) {
            // 1. Maintain monotonic decreasing order (pop smaller elements from back)
            while (!q.empty() && nums[q.back()] <= nums[r]) {
                q.pop_back();
            }
            q.push_back(r);

            // 2. Remove indices that are outside the current sliding window
            if (q.front() < r - k + 1) {
                q.pop_front();
            }

            // 3. Add to output once the first window of size k is reached
            if (r >= k - 1) {
                output.push_back(nums[q.front()]);
            }
        }
        return output;
    }
};