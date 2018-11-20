//
// Created by mateus on 19/11/18.
//
#include <iostream> 
#include <algorithm>
#include "dynamic.h"
#include "backtracking.h"

class Activity;

using namespace std;



int main()
{
    Activity arr[] = {{3, 10, 20}, {1, 2, 50}, {6, 19, 100}, {2, 100, 200}};
    int n = sizeof(arr)/sizeof(arr[0]);
    cout << "The optimal profit is " << dynamic(arr, n)<<endl;
    cout << "The optimal profit is " << backtracking(arr, n)<<endl;
    return 0;
}