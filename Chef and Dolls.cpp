#include<iostream>
using namespace std;
int main()
{
    int no,cnt2=0,cnt,data[100000],k=0,cnt_no[100000],tmp[100000];
    int z=0,flg=0;
    cin>>cnt;
    for(int i=0;i<cnt;i++)
        cin>>data[i];

    for(int n=0;n<cnt;n++)
    {   flg=0;
        cnt2=0;
        for(int l=n;l<cnt;l++)
        {
            for(int o=0;0<z;o++)
            {
                if(data[n]==tmp[o])
                {
                    flg=1;
                    //cnt=0;
                    break;
                }
            }
            if((data[n]==data[l])&&(flg!=1))
            {
                cnt2++;
                //cout<<"cntloop:"<<cnt2;
            }
        }
        if(flg!=1)
        {

            tmp[z]=data[n];
            cnt_no[z]=cnt2;
            cout<<"z::"<<z<<" tmp:"<<tmp[z]<<" cnt:"<<cnt_no[z]<<endl;
        }

    }

    /*for(int i=0;i<5;i++)
    {
        cout<<"cnt:"<<cnt_no[i]<<"tmp:"<<tmp[i]<<endl;
    }*/
    for(int i=0;i<5;i++)
    {
        if(cnt_no[i]%2!=0)
        {
           // cout<<tmp[i]<<endl;
            break;
        }
    }

    return 0;
}
