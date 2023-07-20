#include <iostream>
#include <vector>
using namespace std;

int longestRepeatingSubsequence(string str) {
    int n = str.length();

    // Create a 2D array to store the lengths of longest repeating subsequences
    vector<vector<int> > dp(n + 1, vector<int>(n + 1, 0));

    // Fill the dp table using bottom-up dynamic programming
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            if (str[i - 1] == str[j - 1] && i != j) {
                // If the characters match and the indices are different, add 1 to the result of the previous subproblem
                dp[i][j] = dp[i - 1][j - 1] + 1;
            } else {
                // If the characters don't match, take the maximum of the two possibilities:
                // 1. Exclude the current character from the first subsequence
                // 2. Exclude the current character from the second subsequence
                dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]);
            }
        }
    }

    // The length of the longest repeating subsequence is stored at dp[n][n]
    return dp[n][n];
}

int main() {
    string str = "axxzxy";
    int result = longestRepeatingSubsequence(str);
    cout << "Output: " << result << endl;
    return 0;
}
