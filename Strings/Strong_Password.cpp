#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);

/*
 * Complete the 'minimumNumber' function below.
 *
 * The function is expected to return an INTEGER.
 * The function accepts following parameters:
 *  1. INTEGER n
 *  2. STRING password
 */

int minimumNumber(int n, string s) {
    // Return the minimum number of characters to make the password strong
    int length=0,digit=0,lower=0,upper=0,special=0,i;
    for(i=0;i<n;i++){
        if(s[i]>='0'&&s[i]<='9'){
            digit++;
        }
        else if(s[i]>='a'&&s[i]<='z'){
            lower++;
        }
        else if(s[i]>='A'&&s[i]<='Z'){
            upper++;
        }
        else{
            special++;
        }
    }
    int cnt=0;
    if(digit==0){
        cnt++;
    }
    if(lower==0){
        cnt++;
    }
    if(upper==0){
        cnt++;
    }
    if(special==0){
        cnt++;
    }
    if(n>=6){
        return cnt;
    }
    else{
        return max(cnt,6-n);
    }
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string n_temp;
    getline(cin, n_temp);

    int n = stoi(ltrim(rtrim(n_temp)));

    string password;
    getline(cin, password);

    int answer = minimumNumber(n, password);

    fout << answer << "\n";

    fout.close();

    return 0;
}

string ltrim(const string &str) {
    string s(str);

    s.erase(
        s.begin(),
        find_if(s.begin(), s.end(), not1(ptr_fun<int, int>(isspace)))
    );

    return s;
}

string rtrim(const string &str) {
    string s(str);

    s.erase(
        find_if(s.rbegin(), s.rend(), not1(ptr_fun<int, int>(isspace))).base(),
        s.end()
    );

    return s;
}
