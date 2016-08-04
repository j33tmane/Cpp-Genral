#include<iostream>
#include<algorithm>
using namespace std;
int compare (const void * a, const void * b)
{
  return ( *(int*)b - *(int*)a );
}
int main()
{
    int tc,data[10000],sum2,sum,cnt,i;
    cin>>tc;
    while(tc--)
    {
        cin>>cnt;
        sum=0;sum2=0;

        for(i=0;i<cnt;i++)
        {
            cin>>data[i];
                sum+=data[i];
        }
        qsort (data,cnt, sizeof(int),compare);
        for(i=0;i<cnt;i++)
        {
            sum2+=data[i];
            if(sum2>(sum-sum2))
                break;
        }
        cout<<i+1<<endl;
    }
    return 0;
}
