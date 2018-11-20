//
// Created by mateus on 19/11/18.
//

#ifndef UNTITLED_ACTIVITY_H
#define UNTITLED_ACTIVITY_H

#include <iostream>
#include <algorithm>
struct Activity
{
    int start, finish, profit;
};

bool activityComparataor(Activity s1, Activity s2);
int latestNonConflict(Activity arr[], int i, char method);
#endif //UNTITLED_ACTIVITY_H
