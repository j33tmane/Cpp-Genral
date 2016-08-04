#include<iostream>
using namespace std;

int main(){
    int test,i,k,ans=0,rem,maxrem=0;
    cin>>test;
    int n;
    for(i=0;i<test;i++)
    {
        cin>>n;
        for(k=n-1;k>0;k--)
        {
            rem=n%k;
            if(maxrem<rem)
            {
                maxrem=rem;
                ans=k;
            }
            else
                break;
        }
        if(ans==0)
            cout<<n;
        else
            cout<<ans<<endl;
    }
    return 0;
}
