#include<bits/stdc++.h>
using namespace std;
int main()
{
    int d1,d2,h1,h2,m1,m2,s1,s2;
    string temp1,temp2;
    cin>>temp1>>d1;
    cin>>h1>>temp1>>m1>>temp1>>s1;
    cin>>temp2>>d2;
    cin>>h2>>temp2>>m2>>temp2>>s2;

  int start_time = (d1 * 24 * 3600) + (h1 * 3600) + (m1 * 60) + s1;
    int end_time = (d2 * 24 * 3600) + (h2 * 3600) + (m2 * 60) + s2;
    int duration = end_time - start_time;
    int d = duration / (24 * 3600);
    int h = (duration % (24 * 3600)) / 3600;
    int m = ((duration % (24 * 3600)) % 3600) / 60;
    int s = ((duration % (24 * 3600)) % 3600) % 60;
    cout << d << " dia(s)" << endl;
    cout << h << " hora(s)" << endl;
    cout << m << " minuto(s)" << endl;
    cout << s << " segundo(s)" << endl;
  
    return 0;
}