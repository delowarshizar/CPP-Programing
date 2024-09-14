#include<bits/stdc++.h>
using namespace std;
int main()
{
    double a[3];
    cin>>a[0]>>a[1]>>a[2];
    sort(a,a+3,greater<int>());
    if(a[0]>= a[1] + a[2])
     cout<<"NAO FORMA TRIANGULO"<<endl;
    else {
        if (a[0] * a[0] == a[1] * a[1] + a[2] * a[2])
            cout << "TRIANGULO RETANGULO" << endl;
        if (a[0] * a[0] > a[1] * a[1] + a[2] * a[2])
            cout << "TRIANGULO OBTUSANGULO" << endl;
        if (a[0] * a[0] < a[1] * a[1] + a[2] * a[2])
            cout << "TRIANGULO ACUTANGULO" << endl;
        
        if (a[0] == a[1] && a[1] == a[2])
            cout << "TRIANGULO EQUILATERO" << endl;
        else if (a[0] == a[1] || a[1] == a[2] || a[0] == a[2])
            cout << "TRIANGULO ISOSCELES" << endl;

     

     return 0;

}
}