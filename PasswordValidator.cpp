//Password evaluatiion using algorithm and regex libraries

#include <iostream>
#include<string>
#include<algorithm>
#include<regex>

using namespace std;

//Get password
void userPassword (string &password)
   {
       cout<<"Enter your password:  ";
       getline(cin>>ws,password);
   }

//Using algorithm library for rule structure
// Check uppercase, lowercase, digit, symbol
bool isValidStucture (const string &password)
  {
    if (password.length() >= 8 &&
        any_of(password.begin(), password.end(), ::isupper) &&
        any_of(password.begin(), password.end(), ::islower) &&
        any_of(password.begin(), password.end(), ::isdigit) &&
        any_of(password.begin(), password.end(), ::ispunct)
        )
    {
        return true;
    }
    else return false;
  }

// Using regex library for pattern detections
// avoids weak sequences like abc or 123
bool hasWeakPattern(const string &password)
  {
    regex badNumbers ("123|234|345|456|567|678|789");
    regex badLetters ("abc|bcd|cde|def|efg|fgh|ghi|hij|ijk|jkl|klm|lmn|mno|nop|opq|pqr|qrs|rst|stu|tuv|uvw|vwx|wxy|xyz");

    if (regex_search(password,badNumbers) || regex_search(password,badLetters))
        {
            return false;
        }
    else return true;
  }

int main()
{   cout << "\t=====Password Strength Checker=====\n";
    string password;

    userPassword (password);

    bool basic = isValidStucture (password); // basic for a password that meat the structure rules.
    bool okPattern = hasWeakPattern(password); // okPattern for a passoword that is has no pattern detection.

    if (!basic)
    {
        cout << "Password must include uppercase, lowercase, number and symbol";
    }
    else if (!okPattern)
    {
        cout << "Weak password (pattern detected)";
    }
    else
    {
        cout << "Strong password";
    }

    return 0;
}
