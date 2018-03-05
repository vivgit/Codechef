#include<bits/stdc++.h>

using namespace std;
/*void reset(long arr[],long l)
{
    for(int i=0;i<l;i++)
        arr[i]=0;
}
*/
int main()
{
    long a, n, k, x;
    cin >> a >> n >> k;
    long chm[k]={0};
    //reset(chm,k);

    if(a<=n)
    {
        chm[0]=a;
    }
    else
    {
        for(long i=1;i<=a;i++)
        {
            x=0;
            chm[x]++;
            while(chm[x] > n)
            {
                chm[x]=0;
                if(x+1 != k)
                {
                    chm[x+1]++;
                    x++;
                }
            }
        }
    }

    cout << "\n";
    for(long j=0;j<k;j++)
        cout << chm[j] << " ";
    cout << "\n";
    return 0;
}
