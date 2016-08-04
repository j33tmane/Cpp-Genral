#include<iostream>

using namespace std;
int main()
{
    int tc,HN,TS;
    float CC;
    cin>>tc;
    while(tc--)
    {
        cin>>HN>>CC>>TS;
        if(HN>50&&CC<0.7&&TS>5600)
            cout<<"10"<<endl;
        else if(HN>50&&CC<0.7)
            cout<<"9"<<endl;
        else if(CC<0.7&&TS>5600)
            cout<<"8"<<endl;
        else if(HN>50&&TS>5600)
            cout<<"7"<<endl;
        else if(HN>50||CC<0.7||TS>5600)
            cout<<"6"<<endl;
        else
            cout<<"5"<<endl;
    }
    return 0;
}
