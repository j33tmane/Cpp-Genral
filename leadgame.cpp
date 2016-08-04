#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
    int player1,player2;
    int p1=0,p2=0,lead=0,win=1;
    int cnt;
    int player1lead=0,player2lead=0;
    cin>>cnt;
    for(int i=0;i<cnt;i++)
    {
        cin>>player1>>player2;
        p1+=player1;
        p2+=player2;
        if(lead<abs(p1-p2))
        {
            lead=abs(p1-p2);
            win=(p1>p2)?1:2;
        }
    }
    cout<<win<<" "<<lead;
    return 0;
}
