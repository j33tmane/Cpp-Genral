#include<iostream>
using namespace std;
int main()
{
    int noque,pos=0,tc;
    char ans[1000],chefans[1000];
    long long int money[1001],tmp;
    cin>>tc;
    while(tc--)
    {
            cin>>noque;
            cin>>ans;
            cin>>chefans;
            pos=0;
            for(int k=0;k<noque;k++)
            {
                if(ans[k]==chefans[k])
                    pos++;
            }
            tmp=money[0];
            for(int k=1;k<pos;k++)
            {
                if(money[k]>tmp)
                    tmp=money[k];
            }
            if(pos==noque)
                tmp=money[noque];

            cout<<tmp<<endl;

    }
    return 0;
}
