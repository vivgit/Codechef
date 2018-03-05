#include<bits/stdc++.h>

using namespace std;

int main()
{
    long t;
    cin >> t;
    while(t--)
    {
        long n,x,sum=0;
        cin >> n >> x;
        long notes[n];

        for(int i=0;i<n;i++)
        {
            cin >> notes[i];
            sum+=notes[i];
        }

        long max=sum/x;
        long flag=0 ;
        for(int i=0;i<n;i++)
        {
            if(sum-notes[i] >= max*x)
                flag=1;
        }
        if(flag)
            cout << "-1" << "\n";
        else
            cout << max << "\n";
    }

    return 0;
}
