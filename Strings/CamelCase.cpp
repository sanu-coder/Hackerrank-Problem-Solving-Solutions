/*
Approach : 
1. Initialise count=0.
2. Traverse the string, if you find a capital letter than increment count .
3. Return count to main function.
*/

#include <bits/stdc++.h>

using namespace std;

// Complete the camelcase function below.
int camelcase(string s) {
 int n=s.length();
 int i=0,snt=1;
 while(i<n){
     if(s[i]>='A'&&s[i]<='Z'){
         snt++;
     }
     i++;
 }
return snt;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s;
    getline(cin, s);

    int result = camelcase(s);

    fout << result << "\n";

    fout.close();

    return 0;
}
