# coin-change.
//Coin change count ways to make sum ,count all combination with infinite supply of coin.
#include <iostream>
#include <vector>
using namespace std;
int coinchange(vector<int>&coin,int n,int sum){
if(sum==0)
return 1;
if(n==0||sum<-1)
return 0;
return coinchange(coin,n,sum-coin[n-1])+coinchange(coin,n-1,sum);
}
int main()
{
  vector<int> coin = {1,2,3};
  int n=coin.size();
  int sum=10;
  cout<< coinchange(coin,n,sum);
  return 0;
}
