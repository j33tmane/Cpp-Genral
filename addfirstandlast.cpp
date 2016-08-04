#include<iostream>
using namespace std;
int main()
{
    int tcase,no;
    string s;
    cin>>tcase;
    for(int i=0;i<tcase;i++)
    {
        cin>>s;
        cout<<((s[0]-48)+s[(s.length()-1)]-48)<<endl;
    }
    return 0;
}
