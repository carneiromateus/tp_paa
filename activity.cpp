//
// Created by mateus on 19/11/18.
//

#include "activity.h"
// A utility function that is used for sorting events
// according to finish time
bool activityComparataor(Activity s1, Activity s2)
{
    return (s1.finish < s2.finish);
}

// Find the latest activity (in sorted array) that doesn't
// conflict with the activity[i]
int latestNonConflict(Activity arr[], int i, char method)
{
    for (int j=i-1; j>=0; j--)
    {
        if (arr[j].finish <= arr[method == 'd' ? i : i-1].start)
            return j;
    }
    return -1;
}