#include<iostream>
using namespace std;
int find_char(char c,char str[]){
    int i;
    for(i=0;str[i]!='\0';i++)
    {
        if(c==str[i])
        {
            return i;
        }
    }
    if(str[i]=='\0')
        return -1;
}

int main(){
    char ch;
    char input[20];
    int ans;
    cin>>input;
    cin>>ch;

    ans=find_char(ch,input);
    if(ans==-1)
        cout<<"not present!";
    else
        cout<<"present at pos"<<" "<<ans+1<<endl;

}
