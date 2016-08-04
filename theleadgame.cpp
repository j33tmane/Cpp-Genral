#include<iostream>
using namespace std;

int main()
{
    int player1[10000],player2[10000];
    int cnt;
    int player1lead=0,player2lead=0;
    cin>>cnt;
    for(int i=0;i<cnt;i++)
        cin>>player1[i]>>player2[i];

    for(int j=1;j<cnt;j++)
    {
        player1[j]=player1[j]+player1[j-1];
        player2[j]=player2[j]+player2[j-1];
    }

   // for(int i=0;i<cnt;i++)
     //   cout<<player1[i]<<player2[i]<<endl;

    for(int l=0;l<cnt;l++)
    {
        int tmp=player1[l]-player2[l];
        if(tmp>0)
        {
            if(tmp>player1lead)
                player1lead=tmp;
        }
        else
        {
            if((-tmp)>player2lead)
                player2lead=(-tmp);
        }
    }
    if(player1lead>player2lead)
        cout<<"1 "<<player1lead<<endl;
    else
        cout<<"2 "<<player2lead<<endl;
    return 0;
}
