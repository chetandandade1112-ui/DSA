
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int n = nums.size();

        // Return 0 if array is empty
        if (n == 0) return 0; 

        sort(nums.begin(), nums.end()); 
 
        // Count current sequence length
        int cnt = 1; 
        // Track longest sequence length
        int longest = 1; 

        for (int i = 1; i < n; i++) {
            // If consecutive number exists
            if (nums[i] == nums[i-1]+1) {
                // Increment sequence count
                cnt += 1; 
                // Update longest 
            longest = max(longest, cnt);  
            } 
            
            else if (nums[i] == nums[i-1]) {
                // continue 
                continue;
            }
            else{
                // If consecutive number doesn't exits
                cnt=1;
            }
            
        }
        return longest;
    }
};

int main() {
    vector<int> a = {100, 4, 200, 1, 3, 2}; 

    // Create an instance of solution class
    Solution solution; 
    // Function call for finding longest consecutive sequence
    int ans = solution.longestConsecutive(a); 
    cout << "The longest consecutive sequence is " << ans << "\n";
    return 0;
}