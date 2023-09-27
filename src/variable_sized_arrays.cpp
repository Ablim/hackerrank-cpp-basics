#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int arraysCount;
    int queryCount;
    scanf("%d", &arraysCount);
    scanf("%d", &queryCount);

    int *rows[arraysCount];

    for (int i = 0; i < arraysCount; i++)
    {
        int length;
        scanf("%d", &length);
        rows[i] = new int[length];

        for (int j = 0; j < length; j++)
        {
            int value;
            scanf("%d", &value);
            rows[i][j] = value;
        }
    }

    int *queries = new int[queryCount];

    for (int i = 0; i < queryCount; i++)
    {
        int row;
        int col;
        scanf("%d", &row);
        scanf("%d", &col);
        queries[i] = rows[row][col];
    }

    for (int i = 0; i < queryCount; i++)
    {
        int query = queries[i];
        printf("%d\n", query);
    }

    return 0;
}
