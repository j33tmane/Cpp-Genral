#include<iostream>
using namespace std;

int main()
{
    float GS,BS,HRA,DA;
    int tc;
    cin>>tc;
    while(tc--)
    {
        cin>>BS;
        if(BS<1500)
        {
            HRA=BS*0.1;
            DA=BS*0.9;
            GS= BS+HRA+DA;
        }
        else
        {
            HRA=500;
            DA=BS*0.98;
            GS= BS+HRA+DA;
        }
        cout<<GS<<endl;
    }

}
