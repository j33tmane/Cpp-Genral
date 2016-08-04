#include<iostream>
using namespace std;
long long calFact(int no)
{
    if(no==0)
        return (long long)1;
    else
    {

       // cout<<no*(no-1)<<"\n";
        return no*calFact(no-1);
    }
}

int main()
{
    int cnt,no;
    cin>>cnt;
    for(int k=0;k<cnt;k++)
    {
        cin>>no;
        cout<<calFact(no)<<endl;
    }


    return 0;
}
