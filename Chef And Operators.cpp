#include<iostream>
using namespace std;
int main()
{
    int tc,a,b;
    cin>>tc;
    while(tc--)
    {
        cin>>a>>b;
        if(a>b)
            cout<<">"<<endl;
        else if(a<b)
            cout<<"<"<<endl;
        else if(a==b)
            cout<<"="<<endl;
    }
    return 0;
}
