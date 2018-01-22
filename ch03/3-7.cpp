#include <iostream>

using namespace std;

int main() {
    string s = "some thing";
//    for (decltype(s.size()) n = 0; n < s.size(); ++n) {
//        if (!isspace(s[n]))
//            s[n] = 'X';
//    }

//    for (char &c : s) {
//        c = 'X';
//    }
    decltype(s.size()) n = 0;
    while(n < s.size()){
        ++n;
        s[n] = 'X';
    }
    cout << "result:" << s << endl;
    return 0;
}