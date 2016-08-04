#include<iostream>
#include<cstdlib>
#include<algorithm>
#include<vector>
using namespace std;
long long a[100000][100];
bool value(int lim,int sum,int st,int en,long long t){
    if(lim==0)
        return true;
    else{
        for(int i=st;i<=en;i++){
            if(a[t][i]<=lim)
            {   sum+=a[t][i];
                lim-=a[t][i];
                if(value(lim,sum,i+1,en,t))
                    return true;
                sum-=a[t][i];
                lim+=a[t][i];

            }
        }
        return false;
    }
}
int main(){
    int n[100000],ans[100000];
    long long tt,k[100000];
    long long sum=0;
    cin>>tt;
    for(long long i = 0; i < tt; i++){
        cin>>n[i]>>k[i];
        for(int j = 0; j < n[i]; j++){
            cin>>a[i][j];
        }
        if(value(k[i],0,0,n[i]-1,i)){
            ans[i]=1;
        }
        else{
            ans[i]=0;
        }

    }
    for(long long i=0;i<tt;i++)
    {
        if(ans[i]==1)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
    return 0;
}
