#include <iostream>
using namespace std;

int subsetSum(int arr[], int n, int sum, int k)
{
    int dp[sum + 1][k + 1] = {}; 
    dp[0][0] = 1;

    for (int i = 0; i < n; i++) {
        for (int j = sum; j >= arr[i]; j--) {
            for (int l = k; l >= 1; l--) {
                dp[j][l] += dp[j - arr[i]][l - 1];
            }
        }
    }

    return dp[sum][k];
}

int main()
{  int t;
cin>>t;
while(t--){
    int N,k,sum;
    cin >> N>>k>>sum;
    
    int arr[N];
    
    for (int i = 0; i < N; i++) {
        cin >> arr[i];
    }

    cout << subsetSum(arr, N, sum, k) << endl;
}

    return 0;
}