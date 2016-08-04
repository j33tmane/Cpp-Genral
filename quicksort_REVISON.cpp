#include<iostream>
using namespace std;
int data[100];

int swapn(int i,int j)
{
    int tmp;
    tmp=data[i];
    data[i]=data[j];
    data[j]=tmp;
}
int partition1(int s,int e)
{
    int pivot=data[s];
    int i=s,j=e;
    while(1)
    {
        for(;data[i]<pivot;i++);
        for(;data[j]>pivot;j--);
        if(i<j)
            swapn(i,j);
        else
            return j;
    }
}
void quicksort(int st,int en)
{
    int pivot;
    if(st<en)
    {
        pivot=partition1(st,en);
        quicksort(st,pivot-1);
        quicksort(pivot+1,en);
    }
}
int main()
{
    int cnt;
    cin>>cnt;
    for(int i=0;i<cnt;i++)
        cin>>data[i];
    quicksort(0,cnt-1);

    cout<<endl;
    for(int k=0;k<cnt;k++)
        cout<<data[k]<<" ";

    return 0;
}
