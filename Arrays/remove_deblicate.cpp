#include <bits/stdc++.h>
using namespace std;

// Class to hold the solution logic
class Solution {
public:
    // Function to remove duplicates from sorted array in-place
    int removeDuplicates(vector<int>& nums) {
        // If array is empty, return 0 directly
        if (nums.empty()) return 0;

        // Pointer for the position of last unique element
        int k = 0;

        // Traverse the array starting from the second element
        for (int i = 1; i < nums.size(); i++) {
            // If current element is different from last unique element
            if (nums[k] != nums[i]) {
                // Move pointer for unique element forward
                k++;
                // swap the non unique element
                swap(nums[i],nums[k]);
            }
        }

        // i is index of last unique element, count = i + 1
        return k + 1;
    }
};

int main() {
    vector<int> nums = {0,0,1,1,1,2,2,3,3,4};

    Solution sol;
    int k = sol.removeDuplicates(nums);

    cout << "Unique count = " << k << "\n";
    cout << "Array after removing duplicates: ";
    for (int x = 0; x < k; x++) {
        cout << nums[x] << " ";
    }
    cout << endl;
}
