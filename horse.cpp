#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,min=INT_MAX;
    cin >> t;
    while(t--)
    {
        cin >> n;
        long long int arr[n],diff;

        for(int i=0;i<n;i++)
            cin >> arr[i];

        sort(arr,arr+n);

        for(int i=1;i<n;i++)
        {
            diff=arr[i]-arr[i-1];
            
       ///     if(diff < 0)
          //      diff*=-1;
            
            if(diff<min)
                min=diff;
        }
                
            
    }


    cout << min;
    return 0;
}