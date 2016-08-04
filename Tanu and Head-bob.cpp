#include<iostream>
using namespace std;

int main()
{
     int tc,cnt,indian,Nindian,NS;
     char input[1000];
     cin>>tc;
     while(tc--)
     {
        indian=0;Nindian=0;NS=0;
        cin>>cnt;
        for(int i=0;i<cnt;i++)
            cin>>input[i];
        for(int i=0;i<cnt;i++)
        {
            if(input[i]=='I')
            {
                indian=1;
                break;
            }
            else if(input[i]=='Y')
            {
                Nindian=1;
                break;
            }
            else
                NS=1;
        }
        if(indian==1)
            cout<<"INDIAN"<<endl;
       else if(Nindian==1)
            cout<<"NOT INDIAN"<<endl;
        else if(NS==1)
            cout<<"NOT SURE"<<endl;
     }
    return 0;
}
