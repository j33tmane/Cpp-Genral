#include<iostream>
#include<stdlib.h>
using namespace std;

int main()
{
    int tmp,tmp1,n,i,j,k,posi=0,posj=0,no=2,posi2=0,posj2=0,totsteps=0;
    int mat[500][500],flg=0,tc;
    cin>>tc;
    while(tc--)
    {
        cin>>n;
        for(i=0;i<n;i++)
            for(j=0;j<n;j++)
                cin>>mat[i][j];

        for(i=0;i<n;i++)
        {
            for(j=0;j<n;j++)
            {
                if(mat[i][j]==1)
                {
                    posi=i;
                    posj=j;
                    break;
                }
            }
            break;
        }



            //while(no<(n*n)+1)
            do
            {
                for(int k=0;k<n;k++)
                {
                    for(int l=0;l<n;l++)
                    {
                        if(mat[k][l]==no)
                        {
                            flg=1;
                            posi2=k;
                            posj2=l;
                           // tmp=(posi-posi2);
                           // tmp1=(posj-posj2);
                            //if(tmp<0)
                             //   tmp*=(-1);
                            //if(tmp1<0)
                             //   tmp1*=(-1);
                            //totsteps+=(tmp+tmp1);
                            totsteps+=(abs(posi-posi2)+abs(posj-posj2));
                            break;
                        }
                    }
                    if(flg==1)
                    {
                        flg=0;
                        posi=posi2;
                        posj=posj2;
                        break;
                    }
                }
            no++;
            }while(no<(n*n)+1);
            cout<<totsteps<<endl;
            totsteps=0;
            no=2;
            flg=0;
    }
    return 0;
}
