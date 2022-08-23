#include <iostream>
#include <string>
using std::string;
using std::cout;
using std::endl;
bool checkAnswer(const string &nameOfTest, bool received, bool expected);
// Implement printString here
void printString(string s) {
    for (int i = 0; i < s.length(); ++i) {

        // Changing the ith character
        // to '-' if it's a space.
        if (s[i] == ' ') {
            s[i] = '.';
        }
    }
    // Print the modified string.
    cout << s << endl;
}

// Implement testString here
bool testString(const string& s) {
  for(int i = 0; i < s.size(); i++){
    if(s[i]!='A' && s[i]!='T' && s[i]!='C' && s[i]!='G') {
			return false;
		} if (s[i] == 'T') {
      return true;
    }
	}
	return true;
}

// EDIT CODE BELOW *ONLY* FOR TESTING (ANY CODE BELOW WILL BE OVER-WRITTEN DURING GRADING WITH DIFFERENT TESTS)
int main() {
  cout << "Test if the string is a DNA sequence" << endl;
  {
    string s = "AAT CCG C";
    cout << "Contents of array : ";
    printString(s);
    checkAnswer(s, testString(s), true);
  }
  {
    string s = "hheelllloo";
    cout << "Contents of array : ";
    printString(s);
    checkAnswer(s, testString(s), false);
  }
  {
    string s = "gattc";
    cout << "Contents of array : ";
    printString(s);
    checkAnswer(s, testString(s), false);
  }
  {
    string s = "T";
    cout << "Contents of array : ";
    printString(s);
    checkAnswer(s, testString(s), true);
  }
  {
    string s = " T";
    cout << "Contents of array : ";
    printString(s);
    checkAnswer(s, testString(s), true);
  }
  {
    string s = "AATCCGCd";
    cout << "Contents of array : ";
    printString(s);
    checkAnswer(s, testString(s), false);
  }
  {
    string s = "dAATCCGC";
    cout << "Contents of array : ";
    printString(s);
    checkAnswer(s, testString(s), false);
  }
  {
    string s = "d";
    cout << "Contents of array : ";
    printString(s);
    checkAnswer(s, testString(s), false);
  }
  return 0;
}
bool checkAnswer(const string &nameOfTest, bool received, bool expected) {
    if (received == expected) {
        cout << std::boolalpha << "PASSED " << nameOfTest << ": expected and received " << received << endl;
        return true;
    }
    cout << std::boolalpha << "FAILED " << nameOfTest << ": expected " << expected << " but received " << received << endl;
    return false;
}
