#include<iostream>
using namespace std;

int sum(int x)
{
	return (x*(x + 1)) / 2;
}
int ans[100];
int n[100];
int main()
{
	int t,i=0;
	cin >> t;
	int time,s;
	for(i=0;i<t;i++)
        cin>>n[i];
	for(i=0;i<t;i++)
	{
		s = 1;
		time=0;

	    while (n[i] > 0)
		{
			if (sum(s) == n[i])
			{
				time += s;
				break;
			}
			else{
				n[i] = n[i] - s;
				if (sum(s + 1) <= n[i])
					s++;
				else if (sum(s) <= n[i])
					s = s;
				else if (sum(s - 1) <= n[i])
					s--;
                time ++ ;
			}

		}
		ans[i] = time;
	}
	for (int i = 0; i < t; i++)
		cout << ans[i] << endl;
}
