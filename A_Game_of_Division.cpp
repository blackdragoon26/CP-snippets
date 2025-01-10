#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int flag=0;
          int superhero;
        int n, k;
        cin >> n >> k;
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        int hero = 0;

        for (int i = 0; i < n; i++)
        {
            hero = a[i];
          
            int counter = 1;

            for (int j = 0; j < n; j++)
            {
                if (a[j] == hero)
                {
                    continue;
                }

                else
                {

                    if (((abs(hero - a[j])) % k != 0))
                    {
                        counter++;
                    }
                }
            }
            if (counter == n)
            {
                // hero won
                superhero=i;
               
                flag=5;
                goto sk;
            }
        }

        sk:
        if(flag==0){
            cout<<"NO\n";
        }
        else if(flag==5){
        cout<<"YES\n";
        cout<<superhero+1<<"\n";
        }
    }
}