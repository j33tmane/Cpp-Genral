#include<iostream>
#include<string>
using namespace std;
int main()
{
    int tc,bal,max_bal;
    string s;
    cin>>tc;
    while(tc--)
    {
        bal=0;max_bal=0;
        cin>>s;
        for(int k=0;k<s.length();k++)
        {
            if(s[k]=='(')
                bal+=1;
            else
                bal-=1;
            max_bal=max(bal,max_bal);
        }
        for(int i=0;i<max_bal;i++)
            cout<<"(";
        for(int i=0;i<max_bal;i++)
            cout<<")";
        cout<<endl;
    }
    return 0;
}
