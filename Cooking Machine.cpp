#include<iostream>
using namespace std;
int main()
{
    int tc,a,b,cnt;
    cin>>tc;
    while(tc--)
    {
        cnt=0;
        cin>>a>>b;
        while(b%a!=0)
        {
            cnt++;
            a=a/2;
        }
        while(a!=b)
        {
            a*=2;
            cnt++;
        }
        cout<<cnt<<endl;

    }
    return 0;
}
