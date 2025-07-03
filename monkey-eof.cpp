#include <bits/stdc++.h>
using namespace std;

int main()
{

    char S[100005];

    while (cin.getline(S, 100005))
    {

        int x = strlen(S);

        sort(S, (S + x));

        for (int i = 0; i < x; i++)
        {
            if (S[i] == ' ')
            {
                continue;
            }
            cout << S[i];
        }

        cout << endl;
    }

    return 0;
}