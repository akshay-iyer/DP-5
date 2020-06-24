// Time Complexity : O(mn)
// Space Complexity : O(mn)
// Did this code successfully run on Leetcode : Yes
// Any problem you faced while coding this : No

// Your code here along with comments explaining your approach
// 1. Create DP matrix of 0s with size row+1 and col+1 
// 2. Set matrix[1][1] to 1 implying 1 way to reach start from start
// 3. Recurrence relation: cache[i][j] = cache[i-1][j] + cache[i][j-1]; return last element 

class Solution {
public:
    int uniquePaths(int m, int n) {
        vector<vector<int>> cache(m+1, vector<int>(n+1,0));
        cache[1][1]=1;
        for(int i=1;i<m+1;i++){
            for(int j=1;j<n+1;j++){
                if(i==1 && j==1)
                    continue;
                cache[i][j] = cache[i-1][j] + cache[i][j-1];
            }
        }
        return cache[m][n];
    }
};