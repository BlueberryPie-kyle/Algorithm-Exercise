//Matching Template
#include <bits/stdc++.h>
using namespace std;

// if you use "freopen"
// your "cin" and "cout" will read from file what you point it is "r"
// and be writen in file what you point it is "w"

// Start from this:

void randomBuilder() {
    freopen("..\\TestCases\\testcase.in", "w", stdout);
    /* code */
}

void testProgram() {
    freopen("..\\TestCases\\testcase.in", "r", stdin);
    freopen("..\\TestCases\\test.out", "w", stdout);
    /* code */
}

void correctProgram() {
    freopen("..\\TestCases\\testcase.in", "r", stdin);
    freopen("..\\TestCases\\correct.out", "w", stdout);
    /* code */
}

// End of this. Code above ought to be writen in other file, there's just a template

void checker() {
    int t = 1;// this is the number of test you want to do
    cin >> t;
    while (t--) {
        system("your random.exe");        // this is random testcase builder
        system("your testProgram.exe");   // input program's path in it
        system("your correctProgram.exe");// don't forget compile before check!
        cout.flush();                     // clear the buffer
        freopen("CON", "r", stdin);       // redirect stdin to console
        freopen("CON", "w", stdout);      // redirect stdout to console
        if (system("fc .\\TestCases\\${text ans}.ans .\\TestCases\\correct.out")) {
            cout << "WA for the" << t << "testcases" << endl;
            return;
        } else {
            cout << "AC for all testcases" << endl;
        }
    }
}


int main() {
}