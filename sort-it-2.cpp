#include <bits/stdc++.h>
using namespace std;

int *sort_it(int n)
{

    int *A = new int[n];

    for (int i = 0; i < n; i++)
    {
        cin >> A[i];
    }

    return A;
}

int main()
{

    int N;
    cin >> N;

    int *x = sort_it(N);

    sort(x, x + N, greater<int>());

    for (int i = 0; i < N; i++)
    {
        cout << x[i] << " ";
    }

    return 0;
}