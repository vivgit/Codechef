#include<bits/stdc++.h>

using namespace std;
int freq[26];string st;

void setzero()
{
  for(int i=0;i<26;i++)
    freq[i]=0;
}
void count(int le,int rt,int stat)
{
  int asc;
  for(int i=le;i<rt;i++)
  {
      asc=st[i];
      if(stat)
        freq[asc-97]++;
      else
        freq[asc-97]--;
  }
}

void check()
{
  for(int i=0;i<26;i++)
  {
    if(freq[i] != 0)
    {
      printf("\nNO");
      return;
    }
  }
  printf("\nYES");
}
int main()
{
    long t,mid;
    cin >> t;
    while(t--)
    {
      setzero();
      cin >> st;
      int l=st.length();

      mid=l/2;

      count(0,mid,1);         //1 denotes left array
      if(l%2 == 0)
          count(mid,l,0);         //2 denotes right array
      else
          count(mid+1,l,0);         //1 denotes left array

      check();
    }
    return 0;
}
