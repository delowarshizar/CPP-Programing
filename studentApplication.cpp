#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cout<<"Enter Number of Student: ";
    cin>>n;
    int sum = 0 ;
    int student[n];
    for(int i = 0; i<n; i++ )
    {
        cout<<"Enter mark for student No "<<i+1<<":";
        cin>>student[i];
        sum = student[i]+sum;

    }
    int max = student [0];
    int min = student[0];
    for(int i = 0; i<n; i++)
    {
        if(max<student[i])
        {
            max = student [i];
        }
        if(min>student[i])
        {
            min = student[i];
        }


    }
    cout<<"Maximum Mark is = "<<max<<endl;
    cout<<"Minimum Mark is = "<<min<<endl;
    cout<<showpoint;
    cout<<fixed;
    cout<<setprecision(2);
    float avg = (float)sum/n;
    cout<<"Avarage Mark is = "<<avg<<endl;
    return 0;

}