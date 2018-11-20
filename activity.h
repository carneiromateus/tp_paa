//
// Created by mateus on 19/11/18.
//

#ifndef UNTITLED_ACTIVITY_H
#define UNTITLED_ACTIVITY_H
struct Activity
{
    int start, finish, profit;
};

// A utility function that is used for sorting events
// according to finish time
bool activityComparataor(Activity s1, Activity s2);
// conflict with the activity[i]
int latestNonConflict(Activity arr[], int i, char method);
#endif //UNTITLED_ACTIVITY_H
