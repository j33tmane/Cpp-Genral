#include<iostream>
using namespace std;
int main(){
    int i,j,k,l,pos=0,st=0;;
    char str[20];
    cin>>str;

    for(i=0;i<5;i++)
    {
        st=0;
        for(j=0;j<=2;j++)
        {
            if((i+j>=2&&i-j<3)||((i-j>=2)&&(i-j<3)))
            {
                cout<<str[st];
                st++;
            }
            else
                cout<<" ";
        }
        st=0;
        for(k=0;k<=2;k++)
        {
            if(k<=i&&i+k<5)
            {
                cout<<str[st];
                st++;
            }

        }

        cout<<endl;
    }
    return 0;
}
