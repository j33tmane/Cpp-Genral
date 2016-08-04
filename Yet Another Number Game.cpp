#include<iostream>
using namespace std;

int main()
{
    int tc,no;
    cin>>tc;
    while(tc--)
    {
        cin>>no;
        if(no==3||no==1)
            cout<<"BOB"<<endl;
        else
            cout<<"ALICE"<<endl;
    }
    return 0;
}
