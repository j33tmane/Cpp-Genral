#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int> v;
    int tc,no;//input[50000];
    int cost=0;
    int cnt,tmp;
    cin>>tc;
    while(tc--)
    {
            cin>>cnt;
            for(int i=0;i<cnt;i++)
            {
                cin>>no;
                v.push_back(no);
            }

            while(v.size()!=1)
            {
                if(v[0]>v[1])
                {
                    cost+=v[1];
                    v.erase(v.begin());
                }
                else
                {
                    cost+=v[0];
                    v.erase(v.begin()+1);
                }
            }
           /* for(int k=0;k<cnt-1;k++)
            {
                if(input[k]>input[k+1])
                {
                    cost+=input[k+1];
                }
                else
                {
                    cost+=input[k];
                    tmp=input[k+1];
                    input[k+1]=input[k];
                    input[k]=tmp;

                }
            }*/

            cout<<cost<<endl;
            cost=0;
    }
    return 0;
}
