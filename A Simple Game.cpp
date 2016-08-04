#include<iostream>
using namespace std;

int main()
{
    int tc,cnt,st_mn,tmp,flg;
    long int data[10000];
    cin>>tc;
    while(tc--)
    {
        cin>>cnt;
        st_mn=1;
        tmp=0;
        flg=0;
        for(int i=0;i<cnt;i++)
        {
            cin>>data[i];
            tmp+=data[i];
        }
        while(st_mn<=tmp)
        {
            if(st_mn*cnt==tmp)
            {
                flg=1;
                cout<<st_mn<<endl;
                break;
            }
            else
                st_mn++;
        }
        if(flg==0)
            cout<<"-1"<<endl;
    }
    return 0;
}
