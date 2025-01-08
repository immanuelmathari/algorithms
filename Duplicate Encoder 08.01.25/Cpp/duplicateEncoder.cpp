#include<iostream>
#include<string>
#include<unordered_map>
#include<cctype>
using namespace std;

string duplicateEncoder(const string &word)
{
    unordered_map<char, int> charCount;
    string lowerWord = "";
    for (char ch : word)
    {
        lowerWord += tolower(ch);
    }

    for (char ch : lowerWord)
    {
        charCount[ch]++;
    }
    string result = "";
    for(char ch : lowerWord)
    {
        result += charCount[ch] > 1 ? ')' : '(';
    }
    return result;
}

int main()
{
    string input;

    input = "din";
    cout << "Input: " << input << " -> Output: " << duplicateEncoder(input) << endl;

    input = "recede";
    cout << "Input: " << input << " -> Output: " << duplicateEncoder(input) << endl;

    input = "Success";
    cout << "Input: " << input << " -> Output: " << duplicateEncoder(input) << endl;

    input = "(( @";
    cout << "Input: " << input << " -> Output: " << duplicateEncoder(input) << endl;


    return 0;
}
