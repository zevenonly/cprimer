#include <iostream>

using namespace std;

int main() {
    string s="some thing";
//    for(string::size_type  n=0; n < s.size();++n)
//    {
//        if(!isspace(s[n]))
//            s[n] = 'X';
//    }
    for (auto c:s)
    {
        c = 'X';

    }
    cout<<"result:"<<s<<endl;
    return 0;
}