#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction() cout.unsetf(ios::floatfield); cout.precision(10); cout.setf(ios::fixed,ios::floatfield);

int dp[10010];

int func(int amount , vector<int>& coins)
{
    if(amount==0) return 0;
    if(dp[amount]!=-1) return dp[amount];

    int ans = INT_MAX;
    for(int coin:coins)
    {
        if((amount-coin) >=0)
        ans = min(ans+0LL, (func( (amount-coin), coins) + 1LL));
    }
    return dp[amount] = ans;
}

int coinChange(vector<int>& coins, int amount) {
    memset(dp,-1,sizeof(dp));
    int ans = func(amount,coins);

    return ans == INT_MAX ? -1 : ans; 
}

int main()
{
    optimize();

    vector<int> coins = {2,4,5};
    cout<<coinChange(coins,11);
    return 0;
}
