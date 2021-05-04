/*
Problem link : 
--------------
https://www.hackerrank.com/challenges/big-sorting/problem

Approach :
1.Sort the string array.
2.Also make a boolean function 
3.If size is equal, then compare the strings.
4.If size is unequal then simply return as shown in the code.
*/


#include <bits/stdc++.h>
using namespace std;
bool myfunction(string i,string j)
{
    int m=i.length();
    int n=j.length();
    if(m==n)
    {
        return i<j;
    }
    return m<n;
}
int main()
{
    long long n,i,j;
    string a;
    cin>>n;
    vector <string> v;
    for(i=0;i<n;i++)
    {
        cin>>a;
        v.push_back(a);
    }
    sort(v.begin(),v.end(),myfunction);
    /*
    for(i=0;i<n;i++)
    {
       
            for(j=0;j<n-i-1;j++)
            {
                if(v[j].length()>v[j+1].length())
                {
                    swap(v[j],v[j+1]);
                }
                else if(v[j].length()==v[j+1].length()&&v[j]>v[j+1])
                {
                    swap(v[j],v[j+1]);
                }
            }
        
    }
    */
    for(i=0;i<n;i++)
    {
        cout<<v[i]<<endl;
    }
    return 0;
}
