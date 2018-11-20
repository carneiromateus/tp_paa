//
// Created by mateus on 19/11/18.
//

#include <iostream>
#include <algorithm>
#include "backtracking.h"
using namespace std;
// A recursive function that returns the maximum possible 
// profit from given array of activitys.  The array of activitys must 
// be sorted according to finish time.
int backtrackingRcursive(Activity arr[], int n)
{
    // Base case 
    if (n == 1) return arr[n-1].profit;

    // Find profit when current activity is inclueded 
    int inclProf = arr[n-1].profit;
    int i = latestNonConflict(arr, n, 'b');
    if (i != -1)
        inclProf += backtrackingRcursive(arr, i+1);

    // Find profit when current activity is excluded 
    int exclProf = backtrackingRcursive(arr, n-1);

    return max(inclProf,  exclProf);
}

// The main function that returns the maximum possible 
// profit from given array of activitys 
int backtracking(Activity arr[], int n)
{
    // Sort activitys according to finish time 
    sort(arr, arr+n, activityComparataor);

    return backtrackingRcursive(arr, n);
} 