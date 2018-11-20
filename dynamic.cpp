//
// Created by mateus on 19/11/18.
//

#include "dynamic.h"
#include <iostream>
#include <algorithm>
using namespace std;
// The main function that returns the maximum possible
// profit from given array of activitys
int dynamic(Activity arr[], int n)
{
    // Sort activitys according to finish time
    sort(arr, arr+n, activityComparataor);

    // Create an array to store solutions of subproblems. table[i]
    // stores the profit for activitys till arr[i] (including arr[i])
    int *table = new int[n];
    table[0] = arr[0].profit;

    // Fill entries in M[] using recursive property
    for (int i=1; i<n; i++)
    {
        // Find profit including the current activity
        int inclProf = arr[i].profit;
        int l = latestNonConflict(arr, i, 'd');
        if (l != -1)
            inclProf += table[l];

        // Store maximum of including and excluding
        table[i] = max(inclProf, table[i-1]);
    }

    // Store result and free dynamic memory allocated for table[]
    int result = table[n-1];
    delete[] table;

    return result;
}