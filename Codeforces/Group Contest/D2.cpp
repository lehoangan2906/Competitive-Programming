#include<bits/stdc++.h>
using namespace std;
 
// Function to find
// count of N-digit
// numbers with single
// digit XOR
void countNums(int N)
{ 
  // dp[i][j] stores the number
  // of i-digit numbers with
  // XOR equal to j
  int dp[N][16];
  memset(dp, 0,
         sizeof(dp[0][0]) *
                N * 16);
 
  // For 1-9 store the value
  for (int i = 1; i <= 9; i++)
    dp[0][i] = 1;
 
  // Iterate till N
  for (int i = 1; i < N; i++)
  {
    for (int j = 0; j < 10; j++)
    {
      for (int k = 0; k < 16; k++)
      {
        // Calculate XOR
        int xo = j ^ k;
 
        // Store in DP table
        dp[i][xo] += dp[i - 1][k];
      }
    }
  }
 
  // Initialize count
  int count = 0;
  for (int i = 0; i < 10; i++)
    count += dp[N - 1][i];
 
  // Print the answer
  cout << (count) << endl;
}
  
// Driver Code
int main()
{
  // Given number N
  int N;
    cin >> N;
  // Function Call
  countNums(N);
}