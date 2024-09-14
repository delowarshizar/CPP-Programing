#include<bits/stdc++.h>
using namespace std;
int main()
{
  int n;
  cin>>n;
  int i = 0;
  float result = 0;
  n = abs(n);
  while(n!=0)
  {
    int bit = n & 1;
    result = ( bit * pow(10,i) ) + result;
    n = n >> 1;
    i++;

  }
  cout<<result<<endl;

}