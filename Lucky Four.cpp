#include<iostream>
using namespace std;
int main()
{
    int cnt,cnt2;
    string no;
    cin>>cnt;
    while(cnt--)
    {
        cnt2=0;
        cin>>no;
        for(int i=0;i<no.length();i++)
        {
            if(no[i]=='4')
                cnt2++;
        }
        cout<<cnt2<<endl;
    }
    return 0;
}
