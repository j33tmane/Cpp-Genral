#include<iostream>
using namespace std;

int main()
{
    int tc,no_el,tot_can;
    int A[100],sum;
    cin>>tc;
    while(tc--)
    {
        sum=0;
        cin>>no_el>>tot_can;
        for(int i=0;i<no_el;i++)
        {
            cin>>A[i];
            sum+=A[i];
        }
        if(sum<=tot_can)
            cout<<"Yes"<<endl;
        else
            cout<<"No"<<endl;
    }
    return 0;
}
