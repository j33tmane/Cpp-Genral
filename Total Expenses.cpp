#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    int tc;
    double TE;
    int qnt,pr;
    cin>>tc;
    while(tc--)
    {
            cin>>qnt>>pr;
             std::cout << std::fixed;
            std::cout << std::setprecision(6);
            if(qnt>1000)
            {
                TE=qnt*pr*0.9;
            }
            else
                TE=qnt*pr;

            cout<<TE<<endl;
    }
    return 0;
}
