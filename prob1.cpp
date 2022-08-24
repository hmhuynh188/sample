#include <iostream>
#include <string>

using std::string;
using std::cout;
bool checkAnswer(const string &nameOfTest, bool received, bool expected);
bool checkAnswer(const string &nameOfTest, int received, int expected);

// Implement printString here
void printString(string s) {
  for (int i = 0; i < s.size(); i++) {
        cout << s[i] << " ";
    }
}

// Implement testString here
bool testString(string s) {
  for (int i = 0; i < s.size(); i++) {
    if (s[i] != 'c' && s[i] != 's' && s[i] != 'u' && s[i] != 'f') {
      return false;
    }
  }
  return true;
}

// EDIT CODE BELOW *ONLY* FOR TESTING (ANY CODE BELOW WILL BE OVER-WRITTEN DURING GRADING WITH DIFFERENT TESTS)

int main() {
  cout << "string contains each of the characters: c, s, u and f exactly once\n";
  {
    string s = "calif";
    printString(s);
    checkAnswer(s, testString(s), false);
  }
  {
    string s = "califsu";
    printString(s);
    checkAnswer(s, testString(s), true);
  }
  {
  string s = "a";
  printString(s);
  checkAnswer(s, testString(s), false);
}
{
  string s = "cal state univ fullerton";
  printString(s);
  checkAnswer(s, testString(s), false);
}
{
  string s = "university calif";
  printString(s);
  checkAnswer(s, testString(s), true);
}
{
  string s = "cal state univ";
  printString(s);
  checkAnswer(s, testString(s), false);
}
return 0;
}

bool checkAnswer(const string &nameOfTest, bool received, bool expected) {
    if (received == expected) {
        cout << std::boolalpha << "PASSED " << nameOfTest << ": expected and received " << received << "\n";
        return true;
    }
    cout << std::boolalpha << "FAILED " << nameOfTest << ": expected " << expected << " but received " << received << "\n";
    return false;
}
bool checkAnswer(const string &nameOfTest, int received, int expected) {
    if (received == expected) {
        cout << "PASSED " << nameOfTest << ": expected and received " << received << "\n";
        return true;
    }
    cout << "FAILED " << nameOfTest << ": expected " << expected << " but received " << received << "\n";
    return false;
}
