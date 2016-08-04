#include<iostream>
using namespace std;
int main()
{
    int sum=0,tcase;
    long no;
    cin>>tcase;
    for(int i=0;i<tcase;i++)
    {
        cin>>no;
        while(no!=0)
        {
            sum+=no%10;
            no=no/10;
        }
        cout<<sum<<endl;
        sum=0;
    }
    return 0;
}
