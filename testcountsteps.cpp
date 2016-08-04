#include<cstdio>
#include<stdlib.h>
using namespace std;

int main()
{
    int tmp,tmp1,n,i,j,k,posi,posj,no=2,posi2,posj2,totsteps=0;
    int mat[500][500],flg=0,tc;
    scanf("%d",&tc);
    while(tc--)
    {
        scanf("%d",&n);
        totsteps=0;
        no=2;
        flg=0;
        posi2=0;posj2=0;
        for(i=0;i<n;i++)
            for(j=0;j<n;j++)
            {
                scanf("%d",&mat[i][j]);
                if(mat[i][j]==1)
                {
                    posi=i;
                    posj=j;
                }
            }
            while(no<(n*n)+1)
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
                            totsteps+=abs(posi-posi2)+abs(posj-posj2);
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
            }

            printf("%d\n",totsteps);

    }
    return 0;
}
