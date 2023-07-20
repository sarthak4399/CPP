#include <iostream>

#include <vector>
using namespace std;

class Solution {
public:
    int longestPalinSubseq(string A) {
        int n = A.length();

        // Create a 2D array to store the lengths of longest palindromic subsequences
        vector<vector<int> > dp(n, vector<int>(n, 0));

        // All substrings of length 1 are palindromic
        for (int i = 0; i < n; i++)
            dp[i][i] = 1;

        // Check all substrings of length 2 and fill the dp table
        for (int len = 2; len <= n; len++) {
            for (int i = 0; i < n - len + 1; i++) {
                int j = i + len - 1;
                if (A[i] == A[j]) {
                    // If the first and last characters match, the length of the palindromic subsequence increases by 2
                    dp[i][j] = dp[i + 1][j - 1] + 2;
                } else {
                    // If the first and last characters don't match, take the maximum of the two possibilities:
                    // 1. Exclude the last character and find the longest palindromic subsequence in the substring (i, j-1)
                    // 2. Exclude the first character and find the longest palindromic subsequence in the substring (i+1, j)
                    dp[i][j] = max(dp[i][j - 1], dp[i + 1][j]);
                }
            }
        }

        // The length of the longest palindromic subsequence is stored at dp[0][n-1]
        return dp[0][n - 1];
    }
};
int main() {
    Solution sol;
    string S = "bbabcbcab";
    int result = sol.longestPalinSubseq(S);
    cout << "Output: " << result << endl;
    return 0;
}
