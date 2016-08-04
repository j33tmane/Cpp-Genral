#include<iostream>
using namespace std;
#define max 100000
int main()
{
        int tcase,no,in[max],minans=0,ans=0;
        cin>>tcase;
        for(int i=0;i<tcase;i++)
        {
            cin>>no;
            for(int i=0;i<no;i++)
            {
                cin>>in[i];
            }
            minans=10000000;
            for(int k=0;k<no-1;k++)
            {
                ans=0;
                for(int l=k+1;l<no;l++)
                {
                    ans+=(in[k]+in[l]);
                    if(ans<minans)
                        minans=ans;
                    cout<<minans<<" ans: "<<ans;
                }

            }
            cout<<"\nFinal :"<<minans<<endl;
            ans=0;
        }
        return 0;

}
