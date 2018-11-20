//
// Created by mateus on 19/11/18.
//

#include "dynamic.h"
#include <iostream>
#include <algorithm>
using namespace std;
int dynamic(Activity arr[], int n)
{
    sort(arr, arr+n, activityComparataor);

    int *table = new int[n];
    table[0] = arr[0].profit;

    for (int i=1; i<n; i++)
    {
        int inclProf = arr[i].profit;
        int l = latestNonConflict(arr, i, 'd');
        if (l != -1)
            inclProf += table[l];

        table[i] = max(inclProf, table[i-1]);
    }

    int result = table[n-1];
    delete[] table;

    return result;
}