//
// Created by mateus on 19/11/18.
//

#ifndef UNTITLED_DYNAMIC_H
#define UNTITLED_DYNAMIC_H
// C++ program for weighted activity scheduling using Dynamic Programming.
#include <iostream>
#include <algorithm>
#include "activity.h"
#include <iostream>
#include <algorithm>
using namespace std;


// Find the latest activity (in sorted array) that doesn't
// conflict with the activity[i]
int latestNonConflict(Activity arr[], int i);


// The main function that returns the maximum possible
// profit from given array of activitys
int dynamic(Activity arr[], int n);
#endif //UNTITLED_DYNAMIC_H
