#include <bits/stdc++.h>
using namespace std;

int recordBreakingDays(int size, int array[])
{
    int recordDays = 0;
    int RecordVisitors = INT_MIN;
    int k = 0;
    while (k < size)
    {
        if (array[k] > RecordVisitors && array[k] > array[k + 1])
        {
            recordDays++;
        }
        RecordVisitors = max(RecordVisitors, array[k]);
        k++;
    }
    return recordDays;
}

int main()
{
    int n;
    cin >> n;
    int arr[n+1];
    arr[n] = -1;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << recordBreakingDays(n, arr) << endl;
    return 0;
}
