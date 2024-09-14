#include<bits/stdc++.h>
using namespace std;

int main()
{
    cout<<"Enter a Charecter: ";
    char letter;
    cin>>letter;

    letter = tolower(letter);
    if (letter == 'a' || letter == 'e' || letter == 'i' || letter == 'o' || letter == 'u')
    cout<<""<<letter<<" is vowel"<<endl;
    else
    cout<<"Consonant!"<<endl;
    return 0;


}