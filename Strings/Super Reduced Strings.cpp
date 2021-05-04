/*
Problem Link :
--------------

https://www.hackerrank.com/challenges/reduced-string/problem


Approach : 
----------

1.Iterate through the string .
2.Keep track of repeated characters.
3.Iterate and count the repeated characters(let cnt).
4.If cnt is odd, add that character to ans.
5.Keep track that no adjacent repeated characters should be there in ans.

---------------------****-----------------------------------------------
*/
#include <bits/stdc++.h>

using namespace std;

// Complete the superReducedString function below.
string superReducedString(string s) {
    string ans="";
    int i=0,n=s.length();
    //Iterate through the string . 
    while(i<n-1){
        //keep track of repeated characters. 
        if(s[i]==s[i+1]&&i<n-1){
            int cnt=0;
            //iterate and count the repeated characters(let cnt).
            while(s[i]==s[i+1]&&i<n-1){
                i++;
                cnt++;
            }
            cnt++;
            // If cnt is odd, add that character to ans.
            if(cnt%2!=0)
                ans+=s[i];
            int k=ans.length();
            //keep track that no adjacent repeated characters should be there in ans.
            if(k>1&&ans[k-1]==ans[k-2]){
                ans.pop_back();
                ans.pop_back();
            }
            i++;
        }
        else{
            ans+=s[i];i++;
             int k=ans.length();
            if(k>1&&ans[k-1]==ans[k-2]){
                ans.pop_back();
                ans.pop_back();
            }
            //cout<<ans<<endl;
        }
    }
    if(i<n&&ans.back()!=s[i]){   
        ans+=s[i];
        return ans;
    }
    if(i<n&&ans.back()==s[i]){
        ans.pop_back();
    }
    if(ans==""){
        return "Empty String";
    }
    return ans;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s;
    getline(cin, s);

    string result = superReducedString(s);

    fout << result << "\n";

    fout.close();

    return 0;
}
