#include<iostream>
using namespace std;
int main()
{
    int ans=0,sum=0,tcase,n1,n2;
    cin>>tcase;
    for(int i=0;i<tcase;i++)
    {
        cin>>n1>>n2;
        for(int i=n1;i<=n2;i++)
        {
            int k=i;
            while(k!=0)
            {
                int remainder = k%10;
                ans = ans*10 + remainder;
                k/=10;
            }
            if(i==ans)
                sum+=i;
            ans=0;
        }
        cout<<sum<<endl;
        ans=0;
        sum=0;
    }
return 0;
}
