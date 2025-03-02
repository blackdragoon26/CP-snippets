#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> om(n);
        vector<int> addy(n);
        for (int i = 0; i < n; i++)
        {
            cin >> om[i];
        }

        for (int i = 0; i < n; i++)
        {
            cin >> addy[i];
        }
        int omctr = 0;
        int addyctr = 0;
        int omM =0;
        int addyM=0;
        for (int i = 0; i < n; i++)
        {

            if (om[i] != 0)
            {
                omctr++;
                omM=max(omctr,omM);
            }
            else 
            {

                omctr = 0;
            }
            if (addy[i] != 0)
            {
                addyctr++;
                addyM=max(addyctr,addyM);
            }
           
            else 
            {
                addyctr = 0;
            }
        }

        if (addyM == omM)
        {
            cout << "Draw\n";
        }
        else if (addyM> omM)
        {
            cout << "Addy\n";
        }
        else if(omM>addyM)
        {
            cout << "Om\n";
        }
    }
}