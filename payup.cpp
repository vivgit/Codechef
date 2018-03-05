#include<bits/stdc++.h>

using namespace std;

int main()
{
  long t,n,m,sum,ans,num,flag=0;
  cin >> t;
  while(t--)
  {
    flag=0;
    cin >> n >> m;
    double comb=pow(2,n);
    long arr[n];

    for(int i=0;i<n;i++)
      cin >> arr[i];
    for(int i=0;i<comb;i++)
    {
        sum=0;
        for(int j=0;j<n;j++)
        {
          if(i&(1<<j))
            sum+=arr[j];
        }
        if(sum == m)
          flag=1;
    }
    if(flag)
      cout << "\nYes";
    else
      cout << "\nNo";
  }
  return 0;
}
