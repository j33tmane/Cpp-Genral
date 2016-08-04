#include<iostream>
using namespace std;
#define max 100000

int findpos(int data[],int n,int cnt)
{
    int pos=0;
    for(int i=0;i<cnt;i++)
    {
        if(data[i]==n)
            pos=i;
    }
    return pos;
}
int main(){
    int no=-1,i,ans=0,x,flg=0;
    int input[max];
    int op[max];
    while(1){
        cin>>no;
        if(no==0)
            break;
        for(i=0;i<no;i++)
            cin>>input[i];
        for(i=0;i<no;i++)
        {
            x=findpos(input,i+1,no);
            op[i]=x+1;
        }
        for(i=0;i<no;i++)
        {
            if(op[i]==input[i])
                ans++;
            else
                break;
        }
            if(ans==no)
                cout<<"ambiguous"<<endl;
            else
                cout<<"not ambiguous"<<endl;
        ans=0;
    }
    return 0;
}
