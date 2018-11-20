//
// Created by mateus on 19/11/18.
//

#include <iostream>
#include <algorithm>
#include "backtracking.h"
using namespace std;
int backtrackingRcursive(Activity arr[], int n)
{
    if (n == 1) return arr[n-1].profit;

    int inclProf = arr[n-1].profit;
    int i = latestNonConflict(arr, n, 'b');
    if (i != -1)
        inclProf += backtrackingRcursive(arr, i+1);
    int exclProf = backtrackingRcursive(arr, n-1);

    return max(inclProf,  exclProf);
}

int backtracking(Activity arr[], int n)
{
    sort(arr, arr+n, activityComparataor);

    return backtrackingRcursive(arr, n);
} 