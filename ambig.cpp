#include<iostream>
using namespace std;
#define max 100000

int main(){
    int no=-1,i;
    int input[max];
    while(1){
        cin>>no;
        if(no==0)
            break;
        for(i=0;i<no;i++)
            cin>>input[i];

        for(i=0;i<no;i++)
        {
            if(input[input[i]-1]!=i+1)
                break;
        }
        if(i==no)
            cout<<"ambiguous"<<endl;
        else
            cout<<"not ambiguous"<<endl;
    }
    return 0;
}
