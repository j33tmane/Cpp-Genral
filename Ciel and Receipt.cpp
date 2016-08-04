#include<iostream>

using namespace std;

int main()
{
    int tcase,p,ans=0;
    int menu_price[]={1,2,4,8,16,32,64,128,256,512,1024,2048};
    cin>>tcase;
    for(int i=0;i<tcase;i++)
    {
        cin>>p;
        for(int k=11;p!=0;k--)
        {
           if(menu_price[k]<=p){
            ans+=(p/menu_price[k]);
            p%=menu_price[k];
           }
        }
        cout<<ans<<endl;
        ans=0;
    }
    return 0;
}
