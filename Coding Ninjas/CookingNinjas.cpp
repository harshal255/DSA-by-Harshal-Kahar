#include <bits/stdc++.h>
using namespace std;

// to find maximum ranked chef
int maxiOf(vector<int> &rank)
{

    int maximum = -1;

    for (int i = 0; i < rank.size(); i++)
    {
        maximum = max(maximum, rank[i]);
    }

    return maximum;
}

// to get maximum time taken by a highest rank chef
int maxTime(vector<int> &rank, int m)
{

    int maximum = maxiOf(rank);
    int maximumTimeValue = 0;

    for (int i = 1; i <= m; i++)
    {
        maximumTimeValue += (maximum * i);
    }

    return maximumTimeValue;
}

// to check if it is possible to cook m dishes among n chef in mid time interval
bool isPossible(vector<int> &rank, int m, int mid)
{

    // maintain chefcount
    int chefCount = 1;

    // maintain time taken by current chef
    int currSum = 0;

    // counter to increase time
    int counter = 1;

    for (int i = 1; i <= m; i++)
    {

        // if chef can cook curr i dish as well within mid interval then add
        // to currSum and increase counter
        if (currSum + (counter * rank[chefCount - 1]) <= mid)
        {
            currSum += (counter * rank[chefCount - 1]);
            counter++;
        }
        // if cook was not able to cook ith dish
        else
        {
            // check for next rank cook
            chefCount++;

            // if all cooks are checked
            // or if current cook take more time to cook 1st dish > mid interval
            // return false
            if (chefCount > rank.size() || (i <= m && rank[chefCount - 1] > mid))
            {
                return false;
            }

            // update currSum with time to prepaper 1st dish by cook
            currSum = rank[chefCount - 1];
            // to go to second one set counter as 2
            counter = 2;
        }
    }

    // if we exceed the check of the available cook then returnn false
    if (chefCount > rank.size())
    {
        return false;
    }

    // else we manage to cook all dishes and thus return true
    return true;
}

// to calculate the minimum time require to cook m dishes
int minCookTime(vector<int> &rank, int m)
{
    sort(rank.begin(), rank.end());

    // minimum time to cook would be 0
    // maximum time to cook would be Time consumed by Highest rank chef
    int start = 0, end = maxTime(rank, m);

    int mid = start + (end - start) / 2;
    int ans = -1;

    while (start <= end)
    {

        // if cooking in mid times interval for each chef
        // make m dishes within n cook then
        if (isPossible(rank, m, mid))
        {

            // save the mid time interval
            ans = mid;
            // move to find lesser time interval to do the same
            end = mid - 1;
        }
        // if mid time interval is not enough
        else
        {
            // then move to search for larger interval
            start = mid + 1;
        }

        mid = start + (end - start) / 2;
    }

    return ans;
}