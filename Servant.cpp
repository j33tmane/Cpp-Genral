#include<iostream>
using namespace std;
int main()
{
    int no,tc;
    cin>>tc;
    while(tc--)
    {
        cin>>no;
        if(no<10)
            cout<<"What an obedient servant you are!"<<endl;
        else
            cout<<"-1"<<endl;
    }
    return 0;
}
