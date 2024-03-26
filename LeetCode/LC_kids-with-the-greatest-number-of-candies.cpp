#include <iostream>
#include <vector>
#include <bits/stdc++.h>

using namespace std;

vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies)
{
    int m= *max_element(candies.begin(),candies.end());
    cout<<m;
    vector<bool>result;
    for(int i= 0; i<candies.size(); i++)
    {
        if (candies[i]+ extraCandies > m)
        {


            result.push_back(true);
        }
        else
            result.push_back(false);
    }
    return result;
}
int main()
{

    vector<int> candies1 = {2,3,5,1,3};
    int extraCandies = 3;
    kidsWithCandies( candies1,  extraCandies);


}

