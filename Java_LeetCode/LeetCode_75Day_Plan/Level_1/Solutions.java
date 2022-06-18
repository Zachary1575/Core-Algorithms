public class Solutions {

    // Here are the Easy Problems (YOU SHOULD KNOW THESE BY HEART!!!!!)
    // Some intution, solutions, and problems are provided. However, not all since some may be too complex or Long
    // **** = Very important, its a very clever and cool solution!
    
    // ==================================================================================================================================================================================================================================


    // 1480. Running Sum of 1d Array

    // Given an array nums. We define a running sum of an array as runningSum[i] = sum(nums[0]…nums[i]).
    // Return the running sum of nums.

    // MY SOLUTION

class Solution {
    public int[] runningSum(int[] nums) {
        
        // Set a tracker for the running sum
        int runningSum = 0;
        
        for (int i = 0; i < nums.length; i++) 
        {
            // Update the running sum
            runningSum = nums[i] + runningSum;
            
            // Modify the array
            nums[i] = runningSum;
            
            // OR we could have done "nums[i] += nums[i - 1]""
        }
        
        return nums;
        
    }
}

// MY SOLUTION

// Leet Code Solution
// Intuition

// In the previous approach we created an extra array to store our results. However, we do not actually need to do so. We can obtain the same result without using extra space by performing the same operations on the input array instead.

// Algorithm

//     Increase nums[i] by the previous index's running sum. The previous index's running sum is stored at index i-1 in the input array.
//     We repeat step 1 for all indices from 1 to n-1.


class Solution {
public int[] runningSum(int[] nums) {
        for (int i = 1; i < nums.length; i++) {
            // Result at index `i` is sum of result at `i-1` and element at `i`.
            nums[i] += nums[i - 1];
        }
        return nums;
    }
}

//

// ==================================================================================================================================================================================================================================

}