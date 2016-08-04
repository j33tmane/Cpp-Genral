#include<iostream>
using namespace std;
int main()
{
    int ans=0,tcase,no;
    cin>>tcase;
    for(int i=0;i<tcase;i++)
    {
        cin>>no;
        while(no!=0)
        {
            int remainder = no%10;
            ans = ans*10 + remainder;
            no/=10;
        }
        cout<<ans<<endl;
        ans=0;
    }
return 0;
}
