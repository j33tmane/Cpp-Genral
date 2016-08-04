#include<iostream>
using namespace std;
int main(){
    int tcase,g1,g2;
    cin>>tcase;
    for(int i=0;i<tcase;i++)
    {
        cin>>g1>>g2;
        if(g1>g2)
            cout<<g1<<" "<<(g1+g2)<<endl;
        else
            cout<<g2<<" "<<(g1+g2)<<endl;
    }
    return 0;
}
