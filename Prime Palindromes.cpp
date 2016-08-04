#include<iostream>
using namespace std;
#include <math.h>
bool isPrime (int num)
{
    if (num <=1)
        return false;
    else if (num == 2)
        return true;
    else if (num % 2 == 0)
        return false;
    else
    {
        bool prime = true;
        int divisor = 3;
        double num_d = static_cast<double>(num);
        int upperLimit = static_cast<int>(sqrt(num_d) +1);

        while (divisor <= upperLimit)
        {
            if (num % divisor == 0)
                prime = false;
            divisor +=2;
        }
        return prime;
    }
}
int main()
{
    int ans=0,n1;
        cin>>n1;
        for(int i=n1;i>=n1;i++)
        {
            int k=i;
            ans=0;
            while(k!=0)
            {
                int remainder = k%10;
                ans = ans*10 + remainder;
                k/=10;
            }
            if(i==ans&&isPrime(ans))
                break;
        }
        cout<<ans<<endl;

return 0;
}
