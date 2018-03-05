#include<bits/stdc++.h>

using namespace std;

long long int value(long long int curr)
{
    long long int v1,v2,v3;
    v1=floor(curr/2.0);
    v2=floor(curr/3.0);
    v3=floor(curr/4.0);

    if(v1>4)
	v1=value(v1);
    if(v2>4)
    v2=value(v2);
    if(v3>4)
    v3=value(v3);

    if(v1+v2+v3 > curr)
        return (v1+v2+v3);
    else
        return curr;
}
int main()
{
	long long int curr;
    while(cin >> curr)
    {
        long long int ans;

        ans=value(curr);
        cout << ans << "\n";
    }
    return 0;
}
