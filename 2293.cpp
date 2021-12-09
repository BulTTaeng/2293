#include <iostream>
#include <vector>

using namespace std;

vector<int> coins;

int main() {
  int n, k, input;

  cin >> n;
  cin >> k;
  int dp[100002] = {0,};

  dp[0] = 1;

  for(int i =0; i<n; i++){
    cin >> input;
    coins.push_back(input);
  }

  for(int i =0; i<n; i++){
    for(int j = coins[i]; j<=k; j++){
      dp[j] = dp[j] + dp[j-coins[i]];
    }
     
  }

  
  cout << dp[k];
  
  return 0;
}