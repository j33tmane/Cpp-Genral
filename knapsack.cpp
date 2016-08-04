#include<iostream>
using namespace std;
int profit[100],weight[100];
float sol[100];
int n,cap;

void sort()
{
    int tmp1,tmp2;
    for(int i=0;i<n;i++)
        for(int k=i+1;k<n;k++)
        {
            if((float)profit[i]/weight[i]<(float)profit[k]/weight[k])
            {
                tmp1=profit[i];
                tmp2=weight[i];
                profit[i]=profit[k];
                weight[i]=weight[k];
                profit[k]=tmp1;
                weight[k]=tmp2;
            }
        }
}

float Gknapsack()
{
        int lim=cap,k;
        float ans=0.0;
        for(int i=0;i<n;i++)
        {
            sol[i]=0.0;
        }
        for( k=0;k<n;k++)
        {
            if(weight[k]>lim)
                break;
            sol[k]=1.0;
            lim-=weight[k];
        }
        if(k<=n)
        {
            sol[k]=(float)lim/weight[k];
        }
        for(int l=0;l<n;l++)
        {
            ans+=sol[l]*profit[l];
        }
        return ans;
}
int main()
{
    cout<<"n:"<<endl;
    cin>>n;
    cout<<"cap:"<<endl;
    cin>>cap;
    cout<<"profits and weights:"<<endl;
    for(int i=0;i<n;i++)
        cin>>profit[i]>>weight[i];
    sort();
    cout<<"soln is "<<Gknapsack();
    return 0;
}
