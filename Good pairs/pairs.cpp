#include <bits/stdc++.h>
using namespace std;
int numIdenticalPairs(vector<int>& nums) 
{
       int res = 0;
       for(int i=0;i<nums.size();i++)
           for(int j=i+1;j<nums.size();j++)
               if(nums[i]==nums[j]) res++;
               
       return res;
}
int main() 
{
    int test_case;
    cin>>test_case;

    while(test_case--)
    {
        vector<int> nums;

        int n;
        cin>>n;
        int arr[n];

        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
            nums.push_back(arr[i]);
        }

          cout<<numIdenticalPairs(nums)<<endl;
    }

  return 0; 
}