#include<iostream>

using namespace std;

int findmaxfreq(int x,int no)
{
    int cnt=0;
    while(no!=0)
    {
        if(no%10==x)
            cnt++;
        no=no/10;
    }
    return cnt;
}

int main()
{
    long long  input[30][100];
    int test_cs,pos[30],maxocur[30],oucr[30],x[30],nos[30];
    cin>>test_cs;
    for(int l=0;l<test_cs;l++)
        {
            cin>>nos[l];
            maxocur[l]=0;

            for(int i=0;i<nos[l];i++)
            {
               // for(int j=0;j<nos;j++)
                    cin>>input[l][i];
            }
            cin>>x[l];

            for(int i=0;i<nos[l];i++)
            {
                oucr[l]=findmaxfreq(x[l],input[l][i]);

                if(maxocur[l]<oucr[l])
                {
                    maxocur[l]=oucr[l];
                    pos[l]=i;
                }
            }


        }
         for(int m=0; m<test_cs;m++)
            cout<<input[m][pos[m]]<<endl;
   return 0;
}
